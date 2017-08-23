#pragma once

#include "..\UnityEngine\AI\CollectObjects.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\AI\NavMeshCollectGeometry.h"
#include "..\UnityEngine\AI\NavMeshData.h"
#include "..\UnityEngine\AI\NavMeshDataInstance.h"
#include "..\UnityEngine\Quaternion.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshSurface : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::AI::NavMeshData* m_NavMeshData; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int m_AgentTypeID; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::AI::CollectObjects m_CollectObjects; // 0x24 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Size; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Center; // 0x34 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::LayerMask m_LayerMask; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::AI::NavMeshCollectGeometry m_UseGeometry; // 0x44 (size: 0x4, flags: 0x1, type: 0x11)
		int m_DefaultArea; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_IgnoreNavMeshAgent; // 0x4c (size: 0x1, flags: 0x1, type: 0x2)
		bool m_IgnoreNavMeshObstacle; // 0x4d (size: 0x1, flags: 0x1, type: 0x2)
		bool m_OverrideTileSize; // 0x4e (size: 0x1, flags: 0x1, type: 0x2)
		int m_TileSize; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_OverrideVoxelSize; // 0x54 (size: 0x1, flags: 0x1, type: 0x2)
		float m_VoxelSize; // 0x58 (size: 0x4, flags: 0x1, type: 0xc)
		bool m_BuildHeightMesh; // 0x5c (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::AI::NavMeshDataInstance m_NavMeshDataInstance; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_LastPosition; // 0x64 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion m_LastRotation; // 0x70 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x80
}
