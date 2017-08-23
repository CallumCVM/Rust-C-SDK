#pragma once

#include "..\System\Net\Sockets\Socket.h"
#include "..\System\IO\Stream.h"
#include "..\System\Net\EndPointListener.h"
#include "..\System\IO\MemoryStream.h"
#include "..\System\Net\HttpListenerContext.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Net\ListenerPrefix.h"
#include "..\System\Net\RequestStream.h"
#include "..\System\Net\ResponseStream.h"
#include "..\System\Security\Cryptography\AsymmetricAlgorithm.h"
#include "..\System\Net\HttpConnection\InputState.h"
#include "..\System\Net\HttpConnection\LineState.h"

namespace System
{
	namespace Net
{
	class HttpConnection : public Object // 0x0
	{
	public:
		System::Net::Sockets::Socket* sock; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::EndPointListener* epl; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::MemoryStream* ms; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* buffer; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::HttpListenerContext* context; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* current_line; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::ListenerPrefix* prefix; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::RequestStream* i_stream; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::ResponseStream* o_stream; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::AsymmetricAlgorithm* key; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		bool chunked; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		int chunked_uses; // 0x6c (size: 0x4, flags: 0x1, type: 0x8)
		bool context_bound; // 0x70 (size: 0x1, flags: 0x1, type: 0x2)
		bool secure; // 0x71 (size: 0x1, flags: 0x1, type: 0x2)
		System::Net::HttpConnection::InputState input_state; // 0x74 (size: 0x4, flags: 0x1, type: 0x11)
		System::Net::HttpConnection::LineState line_state; // 0x78 (size: 0x4, flags: 0x1, type: 0x11)
		int position; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x80
}
