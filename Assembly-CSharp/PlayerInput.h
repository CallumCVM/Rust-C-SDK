#pragma once

#include "InputState.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Vector2.h"
#include "TrackIR.h"

namespace rust 
{
	class PlayerInput : public EntityComponent`1 // 0x20
	{
	public:
		InputState* state; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		TrackIR* trackir; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		bool hadInputBuffer; // 0x30 (size: 0x1, flags: 0x86, type: 0x2)
		UnityEngine::Quaternion bodyRotation; // 0x34 (size: 0x10, flags: 0x81, type: 0x11)
		UnityEngine::Vector3 bodyAngles; // 0x44 (size: 0xc, flags: 0x81, type: 0x11)
		UnityEngine::Quaternion headRotation; // 0x50 (size: 0x10, flags: 0x81, type: 0x11)
		UnityEngine::Vector3 headAngles; // 0x60 (size: 0xc, flags: 0x81, type: 0x11)
		UnityEngine::Vector3 recoilAngles; // 0x6c (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector2 viewDelta; // 0x78 (size: 0x8, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 headDelta; // 0x80 (size: 0xc, flags: 0x86, type: 0x11)
		int mouseWheelUp; // 0x8c (size: 0x4, flags: 0x1, type: 0x8)
		int mouseWheelDn; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		int ignoredButtons; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
		bool hasKeyFocus; // 0x98 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa0
}
