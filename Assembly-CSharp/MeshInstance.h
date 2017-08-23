#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\MeshCache\Data.h"

namespace rust 
{
	class MeshInstance : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 position; // 0x10 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x1c (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 scale; // 0x2c (size: 0xc, flags: 0x6, type: 0x11)
		MeshCache::Data* data; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x40
}
