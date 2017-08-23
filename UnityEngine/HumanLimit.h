#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	class HumanLimit : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Min; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Max; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Center; // 0x28 (size: 0xc, flags: 0x1, type: 0x11)
		float m_AxisLength; // 0x34 (size: 0x4, flags: 0x1, type: 0xc)
		int m_UseDefaultValues; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
