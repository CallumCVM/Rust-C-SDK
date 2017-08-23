#pragma once

#include "..\UnityEngine\List.h"
#include "..\Apex\AI\IAction.h"

namespace Apex
{
	namespace AI
{
	class CompositeQualifier : public Object // 0x0
	{
	public:
		UnityEngine::List<Apex.AI.IContextualScorer>* _scorers; // 0x10 (size: 0x8, flags: 0x4, type: 0x15)
		Apex::AI::IAction* <action>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool <isDisabled>k__BackingField; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
