#pragma once

#include "..\System\UIntPtr.h"
#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Object.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Runtime\Remoting\Contexts\DynamicPropertyCollection.h"
#include "..\System\Runtime\Remoting\Contexts\ContextCallbackObject.h"

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
	class Context : public Object // 0x0
	{
	public:
		int domain_id; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int context_id; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		System::UIntPtr static_data; // 0x18 (size: 0x8, flags: 0x1, type: 0x19)
		System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object* datastore; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* context_properties; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool frozen; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x58
}
