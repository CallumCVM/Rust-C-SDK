#pragma once

#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Runtime\Remoting\Contexts\SynchronizationAttribute.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
{
{
			namespace Contexts
{
	class SynchronizedContextReplySink : public Object // 0x0
	{
	public:
		System::Runtime::Remoting::Messaging::IMessageSink* _next; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool _newLock; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		System::Runtime::Remoting::Contexts::SynchronizationAttribute* _att; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
