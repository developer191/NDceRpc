//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: Messages.proto
namespace NDceRpc.ServiceModel.Protobuf
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"RpcErrorData")]
  public partial class RpcErrorData : global::ProtoBuf.IExtensible
  {
    public RpcErrorData() {}
    
    private string _Type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Type", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public string Type
    {
      get { return _Type; }
      set { _Type = value; }
    }

    private string _Message = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"Message", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Message
    {
      get { return _Message; }
      set { _Message = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"MessageResponse")]
  public partial class MessageResponse : global::ProtoBuf.IExtensible
  {
    public MessageResponse() {}
    
    private byte[] _Data;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] Data
    {
      get { return _Data; }
      set { _Data = value; }
    }

    private RpcErrorData _Error = null;
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"Error", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue(null)]
    public RpcErrorData Error
    {
      get { return _Error; }
      set { _Error = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"RpcParamData")]
  public partial class RpcParamData : global::ProtoBuf.IExtensible
  {
    public RpcParamData() {}
    
    private int _Identifier;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Identifier", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int Identifier
    {
      get { return _Identifier; }
      set { _Identifier = value; }
    }
    private byte[] _Data;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"Data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public byte[] Data
    {
      get { return _Data; }
      set { _Data = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"MessageRequest")]
  public partial class MessageRequest : global::ProtoBuf.IExtensible
  {
    public MessageRequest() {}
    
    private int _Operation;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Operation", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int Operation
    {
      get { return _Operation; }
      set { _Operation = value; }
    }
    private readonly global::System.Collections.Generic.List<RpcParamData> _Data = new global::System.Collections.Generic.List<RpcParamData>();
    [global::ProtoBuf.ProtoMember(2, Name=@"Data", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public global::System.Collections.Generic.List<RpcParamData> Data
    {
      get { return _Data; }
    }
  

    private string _Session = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"Session", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string Session
    {
      get { return _Session; }
      set { _Session = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}
