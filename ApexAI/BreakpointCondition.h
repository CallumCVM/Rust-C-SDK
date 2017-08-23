#pragma once

#include "..\Apex\AI\CompareOperator.h"

namespace Apex
{
	namespace AI
{
{
		namespace Visualization
{
	class BreakpointCondition : public Object // 0x0
	{
	public:
		float scoreThreshold; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		Apex::AI::CompareOperator compareOperator; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
