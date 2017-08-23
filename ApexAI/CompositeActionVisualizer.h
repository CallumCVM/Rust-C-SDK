#pragma once

#include "..\UnityEngine\List.h"
#include "..\Apex\AI\Visualization\ConnectorActionVisualizer.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class CompositeActionVisualizer : public ConnectorActionVisualizer // 0x20
	{
	public:
		UnityEngine::List<Apex.AI.Visualization.ActionVisualizer>* _actions; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		Apex::AI::Visualization::ConnectorActionVisualizer* _connectorAction; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
