#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class AttachToBone : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* boneName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Vector3 localPosition; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 localRotation; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		bool MoveToPositionOnce; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
