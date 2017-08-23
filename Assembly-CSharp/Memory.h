#pragma once

#include "..\UnityEngine\List.h"

namespace Rust
{
	namespace Ai
{
	class Memory : public Object // 0x0
	{
	public:
		UnityEngine::List<BaseEntity>* Visible; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<Rust.Ai.Memory.SeenInfo>* All; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x20
}
