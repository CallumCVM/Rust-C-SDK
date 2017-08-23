#pragma once

#include "..\UnityEngineInternal\Input\NativeInputEvent.h"
#include "..\UnityEngine\Vector3.h"

namespace UnityEngineInternal
{
	namespace Input
{
	class NativePointerEvent : public ValueType // 0x0
	{
	public:
		UnityEngineInternal::Input::NativeInputEvent baseEvent; // 0x10 (size: 0x18, flags: 0x6, type: 0x11)
		int pointerId; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Vector3 position; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 delta; // 0x38 (size: 0xc, flags: 0x6, type: 0x11)
		float pressure; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float rotation; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float tilt; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 radius; // 0x50 (size: 0xc, flags: 0x6, type: 0x11)
		float distance; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		int displayIndex; // 0x60 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x68
}
