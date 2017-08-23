#pragma once

#include "..\UnityEngine\UI\CoroutineTween\FloatTween\FloatTweenCallback.h"

namespace UnityEngine
{
	namespace UI
{
{
		namespace CoroutineTween
{
	class FloatTween : public ValueType // 0x0
	{
	public:
		UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback* m_Target; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		float m_StartValue; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
		float m_TargetValue; // 0x1c (size: 0x4, flags: 0x1, type: 0xc)
		float m_Duration; // 0x20 (size: 0x4, flags: 0x1, type: 0xc)
		bool m_IgnoreTimeScale; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
