﻿using System;
using System.Collections.Generic;

namespace NDceRpc.ServiceModel
{
    public abstract class EndpointDispatcher
    {
        protected object _singletonService;
        internal   DispatchTable _operations;
        protected ServiceEndpoint _endpoint;
        internal  DispatchTable Operations
        {
            get { return _operations; }
        }

        protected EndpointDispatcher(object singletonService, ServiceEndpoint endpoint)
        {

            _endpoint = endpoint;
            _singletonService = singletonService;
            _operations = DispatchTableFactory.GetOperations(endpoint._contractType);

        }
    }
}