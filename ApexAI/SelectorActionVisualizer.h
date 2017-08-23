#pragma once

#include "..\Apex\AI\ISelect.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class SelectorActionVisualizer : public ConnectorActionVisualizer // 0x20
	{
	public:
		Apex::AI::ISelect* _connectedSelector; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
