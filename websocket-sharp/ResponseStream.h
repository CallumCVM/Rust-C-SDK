#pragma once

#include "..\System\IO\MemoryStream.h"
#include "..\WebSocketSharp\Net\HttpListenerResponse.h"
#include "..\System\IO\Stream.h"

namespace WebSocketSharp
{
	namespace Net
{
	class ResponseStream : public Stream // 0x18
	{
	public:
		System::IO::MemoryStream* _body; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Net::HttpListenerResponse* _response; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* _stream; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System.Action<unsigned char[],int,int> _write; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System.Action<unsigned char[],int,int> _writeBody; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		System.Action<unsigned char[],int,int> _writeChunked; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		bool _disposed; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		bool _sendChunked; // 0x49 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
