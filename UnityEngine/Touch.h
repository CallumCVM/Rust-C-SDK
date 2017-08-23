#pragma once

#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\TouchPhase.h"
#include "..\UnityEngine\TouchType.h"

namespace UnityEngine
{
	class Touch : public ValueType // 0x0
	{
	public:
		int m_FingerId; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Vector2 m_Position; // 0x14 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_RawPosition; // 0x1c (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_PositionDelta; // 0x24 (size: 0x8, flags: 0x1, type: 0x11)
		float m_TimeDelta; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		int m_TapCount; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::TouchPhase m_Phase; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::TouchType m_Type; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		float m_Pressure; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
		float m_maximumPossiblePressure; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		float m_Radius; // 0x44 (size: 0x4, flags: 0x1, type: 0xc)
		float m_RadiusVariance; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
		float m_AltitudeAngle; // 0x4c (size: 0x4, flags: 0x1, type: 0xc)
		float m_AzimuthAngle; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x58
}
