#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"

namespace rust 
{
	class GroundInfo : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* surface; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Vector3 position; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x24 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x38
}
