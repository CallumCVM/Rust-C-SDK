#pragma once

#include "..\UnityEngine\List.h"
#include "IAIAgent.h"
#include "BaseCombatEntity.h"
#include "..\Rust\Ai\Memory.h"

namespace Rust
{
	namespace Ai
{
	class BaseContext : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.Vector3>* <sampledPositions>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		IAIAgent* <AIAgent>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		BaseCombatEntity* <Entity>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Rust::Ai::Memory* Memory; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
