#pragma once

#include "..\Apex\AI\Selector.h"
#include "..\Apex\AI\Visualization\UtilityAIVisualizer.h"
#include "..\Apex\AI\IQualifier.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class SelectorVisualizer : public Selector // 0x30
	{
	public:
		Apex::AI::Selector* _selector; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::Visualization::UtilityAIVisualizer* _parent; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::IQualifier* <lastSelectedQualifier>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
