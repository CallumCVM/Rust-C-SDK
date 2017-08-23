#pragma once

#include "..\UnityEngineInternal\Input\NativeInputEventType.h"

namespace UnityEngineInternal
{
	namespace Input
{
	class NativeInputEvent : public ValueType // 0x0
	{
	public:
		UnityEngineInternal::Input::NativeInputEventType type; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		int sizeInBytes; // 0x14 (size: 0x4, flags: 0x6, type: 0x8)
		int deviceId; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		double time; // 0x20 (size: 0x8, flags: 0x6, type: 0xd)
	}; // size = 0x28
}
