#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Rust
{
	namespace Workshop
{
	class WorkshopInterface : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* item_position_a; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* item_position_b; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* _backgroundScene; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
