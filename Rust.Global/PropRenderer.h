#pragma once

#include "..\UnityEngine\Vector3.h"

namespace Rust
{
	class PropRenderer : public MonoBehaviour // 0x18
	{
	public:
		bool HideLowLods; // 0x18 (size: 0x1, flags: 0x6, type: 0x2)
		bool HideUnskinnable; // 0x19 (size: 0x1, flags: 0x6, type: 0x2)
		bool Outline; // 0x1a (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 Rotation; // 0x1c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 PostRotation; // 0x28 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 PositionalTweak; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
		float FieldOfView; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 LookDirection; // 0x44 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 UpDirection; // 0x50 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x60
}
