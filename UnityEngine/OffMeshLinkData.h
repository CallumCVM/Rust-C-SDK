#pragma once

#include "..\UnityEngine\AI\OffMeshLinkType.h"
#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace AI
{
	class OffMeshLinkData : public ValueType // 0x0
	{
	public:
		int m_Valid; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		int m_Activated; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int m_InstanceID; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::AI::OffMeshLinkType m_LinkType; // 0x1c (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_StartPos; // 0x20 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_EndPos; // 0x2c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
