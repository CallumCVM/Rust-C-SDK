#pragma once

#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Runtime\Remoting\Contexts\Context.h"
#include "..\System\Runtime\Remoting\Messaging\IMessage.h"

namespace rust 
{
	class ContextRestoreSink : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Messaging::IMessageSink* _next; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Contexts::Context* _context; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::IMessage* _call; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
