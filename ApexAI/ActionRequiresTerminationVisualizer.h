#pragma once

#include "..\Apex\AI\IRequireTermination.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class ActionRequiresTerminationVisualizer : public ActionVisualizer // 0x20
	{
	public:
		Apex::AI::IRequireTermination* _action; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
