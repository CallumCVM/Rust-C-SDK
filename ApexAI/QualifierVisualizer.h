#pragma once

#include "..\Apex\AI\IQualifier.h"
#include "..\Apex\AI\Visualization\ActionVisualizer.h"
#include "..\Apex\AI\Visualization\SelectorVisualizer.h"
#include "..\Apex\AI\Visualization\BreakpointCondition.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class QualifierVisualizer : public Object // 0x0
	{
	public:
		Apex::AI::IQualifier* _qualifier; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::Visualization::ActionVisualizer* _action; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::Visualization::SelectorVisualizer* _parent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::Visualization::BreakpointCondition* <breakpointCondition>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool <isBreakPoint>k__BackingField; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool <breakPointHit>k__BackingField; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		System.Nullable<float> <lastScore>k__BackingField; // 0x34 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x40
}
