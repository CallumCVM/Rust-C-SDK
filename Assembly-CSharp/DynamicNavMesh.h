#pragma once

#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\AI\NavMeshData.h"
#include "..\UnityEngine\AI\NavMeshDataInstance.h"
#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\AI\NavMeshCollectGeometry.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\AsyncOperation.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class DynamicNavMesh : public SingletonComponent`1 // 0x18
	{
	public:
		UnityEngine::AI::NavMeshData* NavMeshData; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<UnityEngine.AI.NavMeshBuildSource>* sources; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::AsyncOperation* BuildingOperation; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::Stopwatch* BuildTimer; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		int NavMeshAgentTypeIndex; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Bounds Bounds; // 0x3c (size: 0x18, flags: 0x6, type: 0x11)
		UnityEngine::AI::NavMeshDataInstance NavMeshDataInstance; // 0x54 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::LayerMask LayerMask; // 0x58 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::AI::NavMeshCollectGeometry NavMeshCollectGeometry; // 0x5c (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x60
}
