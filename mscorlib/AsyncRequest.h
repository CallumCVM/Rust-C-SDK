#pragma once

#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Runtime\Remoting\Messaging\IMessage.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Channels
{
	class AsyncRequest : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Messaging::IMessageSink* ReplySink; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::Runtime::Remoting::Messaging::IMessage* MsgRequest; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x20
}
