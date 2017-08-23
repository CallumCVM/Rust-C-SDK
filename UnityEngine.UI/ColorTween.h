#pragma once

#include "..\UnityEngine\UI\CoroutineTween\ColorTween\ColorTweenCallback.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\UI\CoroutineTween\ColorTween\ColorTweenMode.h"

namespace UnityEngine
{
	namespace UI
{
{
		namespace CoroutineTween
{
	class ColorTween : public ValueType // 0x0
	{
	public:
		UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenCallback* m_Target; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Color m_StartColor; // 0x18 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color m_TargetColor; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::UI::CoroutineTween::ColorTween::ColorTweenMode m_TweenMode; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		float m_Duration; // 0x3c (size: 0x4, flags: 0x1, type: 0xc)
		bool m_IgnoreTimeScale; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
