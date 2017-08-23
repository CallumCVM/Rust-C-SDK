#pragma once

namespace Rust
{
	namespace Ai
{
	class AverageSumOfChildren : public CompositeQualifier // 0x28
	{
	public:
		bool normalize; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		float postNormalizeMultiplier; // 0x2c (size: 0x4, flags: 0x1, type: 0xc)
		float MaxAverageScore; // 0x30 (size: 0x4, flags: 0x1, type: 0xc)
		bool FailIfAnyScoreZero; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
