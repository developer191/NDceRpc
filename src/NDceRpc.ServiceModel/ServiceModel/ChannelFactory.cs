using System;
using System.ServiceModel;

namespace NDceRpc.ServiceModel
{
    public class ChannelFactory : ICommunicationObject, IDisposable
    {
        private Binding _binding;
        private Type _type;
        private readonly bool _callback;
        private ClientRuntime _proxyRouter;

        public ChannelFactory(Binding binding, Type typeOfService, bool callback = false)
        {
            _type = typeOfService;
            _callback = callback;
            _binding = binding;
        }

        public TService CreateChannel<TService>(EndpointAddress createEndpoint)
        {
            if (_proxyRouter== null)
                _proxyRouter = new ClientRuntime(createEndpoint.Uri, _type, _binding,_callback);
            return (TService)_proxyRouter.Channell;
        }

        public void Dispose()
        {
            _proxyRouter.Close(_binding.CloseTimeout);
        }

        public void Abort()
        {
            throw new NotImplementedException();
        }

        public void Close()
        {
            _proxyRouter.Close(_binding.CloseTimeout);
        }

        public void Close(TimeSpan timeout)
        {
            throw new NotImplementedException();
        }

        public IAsyncResult BeginClose(AsyncCallback callback, object state)
        {
            throw new NotImplementedException();
        }

        public IAsyncResult BeginClose(TimeSpan timeout, AsyncCallback callback, object state)
        {
            throw new NotImplementedException();
        }

        public void EndClose(IAsyncResult result)
        {
            throw new NotImplementedException();
        }

        public void Open()
        {
            throw new NotImplementedException();
        }

        public void Open(TimeSpan timeout)
        {
            throw new NotImplementedException();
        }

        public IAsyncResult BeginOpen(AsyncCallback callback, object state)
        {
            throw new NotImplementedException();
        }

        public IAsyncResult BeginOpen(TimeSpan timeout, AsyncCallback callback, object state)
        {
            throw new NotImplementedException();
        }

        public void EndOpen(IAsyncResult result)
        {
            throw new NotImplementedException();
        }

        public CommunicationState State { get; private set; }
        public event EventHandler Closed;
        public event EventHandler Closing;
        public event EventHandler Faulted;
        public event EventHandler Opened;
        public event EventHandler Opening;
    }
}