#pragma once

#include "..\UnityEngineInternal\Input\NativeInputEvent.h"

namespace UnityEngineInternal
{
	namespace Input
{
	class NativeGenericEvent : public ValueType // 0x0
	{
	public:
		UnityEngineInternal::Input::NativeInputEvent baseEvent; // 0x10 (size: 0x18, flags: 0x6, type: 0x11)
		int controlIndex; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int rawValue; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		double scaledValue; // 0x30 (size: 0x8, flags: 0x6, type: 0xd)
	}; // size = 0x38
}
