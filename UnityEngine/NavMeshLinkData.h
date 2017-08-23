#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshLinkData : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_StartPosition; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_EndPosition; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		float m_CostModifier; // 0x28 (size: 0x4, flags: 0x1, type: 0xc)
		int m_Bidirectional; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		float m_Width; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		int m_Area; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int m_AgentTypeID; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
