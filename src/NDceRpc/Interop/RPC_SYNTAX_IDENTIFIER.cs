﻿using System;
using System.Runtime.InteropServices;

namespace NDceRpc.Interop
{
    [StructLayout(LayoutKind.Sequential)]
    public struct RPC_SYNTAX_IDENTIFIER
    {
        public Guid SyntaxGUID;
        public RPC_VERSION SyntaxVersion;
    }
}