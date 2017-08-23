#pragma once

#include "..\System\Guid.h"
#include "..\Apex\AI\ISelect.h"

namespace Apex
{
	namespace AI
{
	class AILinkAction : public Object // 0x0
	{
	public:
		Apex::AI::ISelect* _linkedAI; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Guid _aiId; // 0x18 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
