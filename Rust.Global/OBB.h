#pragma once

#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class OBB : public ValueType // 0x0
	{
	public:
		UnityEngine::Quaternion rotation; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 position; // 0x20 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 extents; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 forward; // 0x38 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 right; // 0x44 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 up; // 0x50 (size: 0xc, flags: 0x6, type: 0x11)
		float reject; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x60
}
