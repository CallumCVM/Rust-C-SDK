#pragma once

#include "..\UnityEngine\Renderer.h"
#include "OBB.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\MeshCache\Data.h"

namespace rust 
{
	class MeshRendererInstance : public ValueType // 0x0
	{
	public:
		UnityEngine::Renderer* renderer; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		OBB bounds; // 0x18 (size: 0x50, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 position; // 0x68 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Quaternion rotation; // 0x74 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 scale; // 0x84 (size: 0xc, flags: 0x6, type: 0x11)
		MeshCache::Data* data; // 0x90 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x98
}
