#pragma once

#include "..\UnityEngine\AnimationCurve.h"

namespace Apex
{
	namespace AI
{
	class UtilityCurveEditorBaseScorer : public ContextualScorerBase // 0x18
	{
	public:
		UnityEngine::AnimationCurve* curve; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
