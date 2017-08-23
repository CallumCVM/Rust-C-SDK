#pragma once

#include "..\UnityEngine\Experimental\Director\FrameData\Flags.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Director
{
	class FrameData : public ValueType // 0x0
	{
	public:
		unsigned __int64 m_FrameID; // 0x10 (size: 0x8, flags: 0x3, type: 0xb)
		double m_DeltaTime; // 0x18 (size: 0x8, flags: 0x3, type: 0xd)
		float m_Weight; // 0x20 (size: 0x4, flags: 0x3, type: 0xc)
		float m_EffectiveWeight; // 0x24 (size: 0x4, flags: 0x3, type: 0xc)
		float m_EffectiveSpeed; // 0x28 (size: 0x4, flags: 0x3, type: 0xc)
		UnityEngine::Experimental::Director::FrameData::Flags m_Flags; // 0x2c (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x30
}
