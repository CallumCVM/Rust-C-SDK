#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\AI\NavMeshLinkInstance.h"
#include "..\UnityEngine\Quaternion.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshLink : public MonoBehaviour // 0x18
	{
	public:
		int m_AgentTypeID; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Vector3 m_StartPoint; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_EndPoint; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		float m_Width; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		int m_CostModifier; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_Bidirectional; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
		bool m_AutoUpdatePosition; // 0x3d (size: 0x1, flags: 0x1, type: 0x2)
		int m_Area; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::AI::NavMeshLinkInstance m_LinkInstance; // 0x44 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_LastPosition; // 0x48 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Quaternion m_LastRotation; // 0x54 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
