#pragma once

#include "..\Apex\AI\IAction.h"

namespace Apex
{
	namespace AI
{
		template <typename T0>
	class QualifierBase : public Object // 0x0
	{
	public:
		Apex::AI::IAction* <action>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool <isDisabled>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
