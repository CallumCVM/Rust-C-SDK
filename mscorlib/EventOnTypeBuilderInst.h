#pragma once

#include "..\System\Reflection\MonoGenericClass.h"
#include "..\System\Reflection\Emit\EventBuilder.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class EventOnTypeBuilderInst : public EventInfo // 0x18
	{
	public:
		System::Reflection::MonoGenericClass* instantiation; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::Emit::EventBuilder* evt; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
