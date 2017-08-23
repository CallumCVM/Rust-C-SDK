#pragma once

#include "..\UnityEngine\List.h"
#include "..\Apex\AI\IConnectorAction.h"

namespace Apex
{
	namespace AI
{
	class CompositeAction : public Object // 0x0
	{
	public:
		UnityEngine::List<Apex.AI.IAction>* _actions; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		Apex::AI::IConnectorAction* _connectorAction; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
