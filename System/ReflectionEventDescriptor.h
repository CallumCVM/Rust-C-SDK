#pragma once

#include "..\System\Type.h"
#include "..\System\Reflection\EventInfo.h"
#include "..\System\Reflection\MethodInfo.h"

namespace System
{
	namespace ComponentModel
{
	class ReflectionEventDescriptor : public EventDescriptor // 0x28
	{
	public:
		System::Type* _eventType; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _componentType; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::EventInfo* _eventInfo; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* add_method; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* remove_method; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
