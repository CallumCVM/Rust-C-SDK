#pragma once

#include "..\UnityEngineInternal\Input\NativeInputEvent.h"
#include "..\UnityEngine\KeyCode.h"

namespace UnityEngineInternal
{
	namespace Input
{
	class NativeKeyEvent : public ValueType // 0x0
	{
	public:
		UnityEngineInternal::Input::NativeInputEvent baseEvent; // 0x10 (size: 0x18, flags: 0x6, type: 0x11)
		UnityEngine::KeyCode key; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		int modifiers; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
