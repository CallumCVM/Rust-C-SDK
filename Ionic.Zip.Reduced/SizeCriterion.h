#pragma once

#include "..\Ionic\ComparisonOperator.h"

namespace Ionic
{
	class SizeCriterion : public SelectionCriterion // 0x18
	{
	public:
		Ionic::ComparisonOperator Operator; // 0x14 (size: 0x4, flags: 0x3, type: 0x11)
		__int64 Size; // 0x18 (size: 0x8, flags: 0x3, type: 0xa)
	}; // size = 0x20
}
