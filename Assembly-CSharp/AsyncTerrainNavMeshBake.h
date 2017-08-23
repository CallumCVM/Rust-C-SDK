#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Vector3.h"
#include "..\System\Action.h"

namespace rust 
{
	class AsyncTerrainNavMeshBake : public CustomYieldInstruction // 0x0
	{
	public:
		UnityEngine::List<int>* indices; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Vector3>* vertices; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Vector3>* normals; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<int>* triangles; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action* worker; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Vector3 pivot; // 0x38 (size: 0xc, flags: 0x1, type: 0x11)
		int width; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		int height; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		bool normal; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
		bool alpha; // 0x4d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x50
}
