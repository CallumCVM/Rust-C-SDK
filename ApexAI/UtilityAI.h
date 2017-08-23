#pragma once

#include "..\System\Guid.h"
#include "..\UnityEngine\List.h"
#include "..\Apex\AI\Selector.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Apex
{
	namespace AI
{
	class UtilityAI : public Object // 0x0
	{
	public:
		UnityEngine::List<Apex.AI.Selector>* _selectors; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		Apex::AI::Selector* _rootSelector; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <name>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Guid _rootSelectorId; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
		System::Guid _id; // 0x38 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
