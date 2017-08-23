#pragma once

#include "..\System\Object.h"
#include "..\System\AsyncCallback.h"
#include "..\System\Exception.h"
#include "..\System\Threading\ManualResetEvent.h"
#include "..\Mono\Security\Protocol\Tls\Handshake\HandshakeMessage.h"

namespace rust 
{
	class SendRecordAsyncResult : public Object // 0x0
	{
	public:
		System::Object locker; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::AsyncCallback* _userCallback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _userState; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Exception* _asyncException; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::ManualResetEvent* handle; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::Handshake::HandshakeMessage* _message; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool completed; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
