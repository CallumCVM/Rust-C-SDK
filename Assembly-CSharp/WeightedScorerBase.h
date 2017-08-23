#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Rust
{
	namespace Ai
{
		template <typename T0>
	class WeightedScorerBase : public OptionScorerBase`1 // 0x18
	{
	public:
		UnityEngine::UnicodeString* DebugName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool InvertScore; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		float ScoreScale; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
