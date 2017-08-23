#pragma once

#include "..\UnityEngine\HumanBone.h"
#include "..\UnityEngine\SkeletonBone.h"

namespace UnityEngine
{
	class HumanDescription : public ValueType // 0x0
	{
	public:
		UnityEngine::HumanBone* human; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::SkeletonBone* skeleton; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		float m_ArmTwist; // 0x20 (size: 0x4, flags: 0x3, type: 0xc)
		float m_ForeArmTwist; // 0x24 (size: 0x4, flags: 0x3, type: 0xc)
		float m_UpperLegTwist; // 0x28 (size: 0x4, flags: 0x3, type: 0xc)
		float m_LegTwist; // 0x2c (size: 0x4, flags: 0x3, type: 0xc)
		float m_ArmStretch; // 0x30 (size: 0x4, flags: 0x3, type: 0xc)
		float m_LegStretch; // 0x34 (size: 0x4, flags: 0x3, type: 0xc)
		float m_FeetSpacing; // 0x38 (size: 0x4, flags: 0x3, type: 0xc)
		bool m_HasTranslationDoF; // 0x3c (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x40
}
