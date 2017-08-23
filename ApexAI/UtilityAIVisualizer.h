#pragma once

#include "..\Apex\AI\IUtilityAI.h"
#include "..\UnityEngine\List.h"
#include "..\Apex\AI\Visualization\SelectorVisualizer.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class UtilityAIVisualizer : public Object // 0x0
	{
	public:
		Apex::AI::IUtilityAI* _ai; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<System.Action>* _postExecute; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		Apex::AI::Visualization::SelectorVisualizer* _visualizerRootSelector; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<Apex.AI.Visualization.SelectorVisualizer>* _selectorVisualizers; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<Apex.AI.Visualization.UtilityAIVisualizer>* _linkedAIs; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x38
}
