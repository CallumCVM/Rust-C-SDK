#pragma once

#include "..\Apex\AI\Visualization\UtilityAIVisualizer.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class AILinkActionVisualizer : public ConnectorActionVisualizer // 0x20
	{
	public:
		Apex::AI::Visualization::UtilityAIVisualizer* _linkedAI; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
