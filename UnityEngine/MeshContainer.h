#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\MeshSubsetCombineUtility\MeshInstance.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class MeshContainer : public ValueType // 0x0
	{
	public:
		UnityEngine::GameObject* gameObject; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::MeshSubsetCombineUtility::MeshInstance instance; // 0x18 (size: 0x6c, flags: 0x6, type: 0x11)
		UnityEngine::List<UnityEngine.MeshSubsetCombineUtility.SubMeshInstance>* subMeshInstances; // 0x88 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x90
}
