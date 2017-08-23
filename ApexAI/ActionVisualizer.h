#pragma once

#include "..\Apex\AI\IAction.h"
#include "..\Apex\AI\Visualization\IQualifierVisualizer.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class ActionVisualizer : public Object // 0x0
	{
	public:
		Apex::AI::IAction* _action; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::Visualization::IQualifierVisualizer* _parent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
