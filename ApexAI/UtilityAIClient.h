#pragma once

#include "..\Apex\AI\IUtilityAI.h"
#include "..\Apex\AI\Components\IContextProvider.h"
#include "..\Apex\AI\IRequireTermination.h"
#include "..\Apex\AI\Components\UtilityAIClientState.h"

namespace Apex
{
	namespace AI
{
{
		namespace Components
{
	class UtilityAIClient : public Object // 0x0
	{
	public:
		Apex::AI::IUtilityAI* _ai; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::Components::IContextProvider* _contextProvider; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::IRequireTermination* _activeAction; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::AI::Components::UtilityAIClientState <state>k__BackingField; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
