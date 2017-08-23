#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Runtime\Remoting\Messaging\IMessageSink.h"
#include "..\System\Runtime\Remoting\Contexts\DynamicPropertyCollection.h"
#include "..\System\Runtime\Remoting\ObjRef.h"

namespace System
{
	namespace Runtime
{
{
		namespace Remoting
{
	class Identity : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _objectUri; // 0x10 (size: 0x8, flags: 0x4, type: 0xe)
		System::Runtime::Remoting::Messaging::IMessageSink* _channelSink; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		System::Runtime::Remoting::Messaging::IMessageSink* _envoySink; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
		System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _clientDynamicProperties; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _serverDynamicProperties; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Remoting::ObjRef* _objRef; // 0x38 (size: 0x8, flags: 0x4, type: 0x12)
		bool _disposed; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
