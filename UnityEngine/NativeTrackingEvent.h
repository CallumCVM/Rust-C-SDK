#pragma once

#include "..\UnityEngineInternal\Input\NativeInputEvent.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"

namespace UnityEngineInternal
{
	namespace Input
{
	class NativeTrackingEvent : public ValueType // 0x0
	{
	public:
		UnityEngineInternal::Input::NativeInputEvent baseEvent; // 0x10 (size: 0x18, flags: 0x6, type: 0x11)
		int nodeId; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Vector3 localPosition; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion localRotation; // 0x38 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
