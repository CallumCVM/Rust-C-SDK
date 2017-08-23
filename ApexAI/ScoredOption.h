#pragma once

#include "TOption.h"

namespace Apex
{
	namespace AI
{
		template <typename T0>
	class ScoredOption : public ValueType // 0x0
	{
	public:
		TOption _option; // 0x10 (size: 0x8, flags: 0x1, type: 0x13)
		float _score; // 0x18 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x20
}
