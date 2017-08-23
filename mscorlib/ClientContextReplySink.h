#pragma once

#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Runtime\Remoting\Contexts\Context.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Messaging
{
	class ClientContextReplySink : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Messaging::IMessageSink* _replySink; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Contexts::Context* _context; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
