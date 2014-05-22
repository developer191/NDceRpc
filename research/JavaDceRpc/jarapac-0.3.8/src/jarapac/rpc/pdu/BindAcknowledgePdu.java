/* Jarapac DCE/RPC Framework
 * Copyright (C) 2003  Eric Glass
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

package rpc.pdu;

import rpc.ConnectionOrientedPdu;

import rpc.core.Port;
import rpc.core.PresentationResult;

import ndr.*;

public class BindAcknowledgePdu extends ConnectionOrientedPdu {

    public static final int BIND_ACKNOWLEDGE_TYPE = 0x0c;

    private PresentationResult[] resultList;

    private int maxTransmitFragment = MUST_RECEIVE_FRAGMENT_SIZE;

    private int maxReceiveFragment = MUST_RECEIVE_FRAGMENT_SIZE;

    private int associationGroupId = 0;

    private Port secondaryAddress;

    public int getType() {
        return BIND_ACKNOWLEDGE_TYPE;
    }

    public int getMaxTransmitFragment() {
        return maxTransmitFragment;
    }

    public void setMaxTransmitFragment(int maxTransmitFragment) {
        this.maxTransmitFragment = maxTransmitFragment;
    }

    public int getMaxReceiveFragment() {
        return maxReceiveFragment;
    }

    public void setMaxReceiveFragment(int maxReceiveFragment) {
        this.maxReceiveFragment = maxReceiveFragment;
    }

    public int getAssociationGroupId() {
        return associationGroupId;
    }

    public void setAssociationGroupId(int associationGroupId) {
        this.associationGroupId = associationGroupId;
    }

    public Port getSecondaryAddress() {
        return secondaryAddress;
    }

    public void setSecondaryAddress(Port secondaryAddress) {
        this.secondaryAddress = secondaryAddress;
    }

    public PresentationResult[] getResultList() {
        return resultList;
    }

    public void setResultList(PresentationResult[] resultList) {
        this.resultList = resultList;
    }

    protected void readBody(NetworkDataRepresentation ndr) {
        setMaxTransmitFragment(ndr.readUnsignedShort());
        setMaxReceiveFragment(ndr.readUnsignedShort());
        setAssociationGroupId((int) ndr.readUnsignedLong());
        Port secondaryAddress = new Port();
        secondaryAddress.read(ndr);
        setSecondaryAddress(secondaryAddress);
        ndr.getBuffer().align(4);
        int count = ndr.readUnsignedSmall();
        PresentationResult[] resultList = new PresentationResult[count];
        for (int i = 0; i < count; i++) {
            resultList[i] = new PresentationResult();
            resultList[i].read(ndr);
        }
        setResultList(resultList);
    }

    protected void writeBody(NetworkDataRepresentation ndr) {
        ndr.writeUnsignedShort(getMaxTransmitFragment());
        ndr.writeUnsignedShort(getMaxReceiveFragment());
        ndr.writeUnsignedLong(getAssociationGroupId());
        Port secondaryAddress = getSecondaryAddress();
        if (secondaryAddress == null) secondaryAddress = new Port();
        secondaryAddress.write(ndr);
        ndr.getBuffer().align(4);
        PresentationResult[] resultList = getResultList();
        int count = resultList.length;
        ndr.writeUnsignedSmall((short) count);
        for (int i = 0; i < count; i++) {
            resultList[i].write(ndr);
        }
    }

}
