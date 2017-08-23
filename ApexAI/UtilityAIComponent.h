#pragma once

#include "..\Apex\AI\Components\UtilityAIConfig.h"
#include "..\Apex\AI\Components\IUtilityAIClient.h"

namespace Apex
{
	namespace AI
{
{
		namespace Components
{
	class UtilityAIComponent : public ExtendedMonoBehaviour // 0x20
	{
	public:
		Apex::AI::Components::UtilityAIConfig* aiConfigs; // 0x20 (size: 0x8, flags: 0x3, type: 0x1d)
		Apex::AI::Components::IUtilityAIClient* _clients; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x30
}
