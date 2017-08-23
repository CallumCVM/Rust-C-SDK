#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"

namespace UnityEngine
{
	class SkeletonBone : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* parentName; // 0x18 (size: 0x8, flags: 0x3, type: 0xe)
		UnityEngine::Vector3 position; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x2c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 scale; // 0x3c (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
