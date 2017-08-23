#pragma once

#include "..\System\Object.h"
#include "..\System\Threading\WaitHandle.h"
#include "..\System\Threading\ExecutionContext.h"
#include "..\System\Runtime\Remoting\Messaging\MonoMethodMessage.h"
#include "..\System\Runtime\Remoting\Messaging\IMessageCtrl.h"
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
			namespace Messaging
{
	class AsyncResult : public Object // 0x0
	{
	public:
		System::Object async_state; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::WaitHandle* handle; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object async_delegate; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		__int64 data; // 0x28 (size: 0x8, flags: 0x1, type: 0x18)
		System::Object object_data; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		bool sync_completed; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool completed; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
		bool endinvoke_called; // 0x3a (size: 0x1, flags: 0x1, type: 0x2)
		System::Object async_callback; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::ExecutionContext* current; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::ExecutionContext* original; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		int gchandle; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		System::Runtime::Remoting::Messaging::MonoMethodMessage* call_message; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::IMessageCtrl* message_ctrl; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::IMessage* reply_message; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x78
}
