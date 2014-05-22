package rpc.ndr;

public class VaryingWideString implements Element {

    protected char[] string;

    private Variance variance;

    private boolean embedded;

    public VaryingWideString() {
        this(null);
    }

    public VaryingWideString(String string) {
        setString(string);
    }

    public String getString() {
        return new String(string);
    }

    public void setString(String string) {
        this.string = (string != null) ? string.toCharArray() : new char[0];
    }

    public int getAlignment() {
        return 2;
    }

    public boolean isEmbedded() {
        return embedded;
    }

    public void setEmbedded(boolean embedded) {
        this.embedded = embedded;
    }

    public void read(NetworkDataRepresentation ndr) {
        Variance variance;
        setVariance(variance = new Variance((int) ndr.readUnsignedLong(),
                (int) ndr.readUnsignedLong()));
        ArrayHelper.WIDE_CHARACTER_HELPER.readArray(string, variance.offset,
                variance.length - 1, ndr);
        ndr.readWideCharacter();
    }

    public void write(NetworkDataRepresentation ndr) {
        Variance variance = getVariance();
        ndr.writeUnsignedLong(variance.offset);
        ndr.writeUnsignedLong(variance.length);
        ArrayHelper.WIDE_CHARACTER_HELPER.writeArray(string, variance.offset,
                variance.length - 1, ndr);
        ndr.writeWideCharacter('\u0000');
    }

    protected int getConformance() {
        return (string == null) ? 1 : 1 + string.length;
    }

    public Variance getVariance() {
        return (variance != null) ? variance :
                (variance = new Variance(0, getConformance()));
    }

    public void setVariance(Variance variance) {
        this.variance = variance;
    }

    public Object clone() {
        try {
            return super.clone();
        } catch (CloneNotSupportedException ex) {
            throw new IllegalStateException();
        }
    }

    public String toString() {
        return getString();
    }

}
