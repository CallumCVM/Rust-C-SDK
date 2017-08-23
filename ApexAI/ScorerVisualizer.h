#pragma once

#include "..\Apex\AI\IContextualScorer.h"
#include "..\Apex\AI\Visualization\CompositeQualifierVisualizer.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class ScorerVisualizer : public Object // 0x0
	{
	public:
		Apex::AI::IContextualScorer* _scorer; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::Visualization::CompositeQualifierVisualizer* _parent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <lastScore>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
