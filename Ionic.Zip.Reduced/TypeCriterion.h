#pragma once

#include "..\System\Char.h"
#include "..\Ionic\ComparisonOperator.h"

namespace Ionic
{
	class TypeCriterion : public SelectionCriterion // 0x18
	{
	public:
		System::Char ObjectType; // 0x12 (size: 0x2, flags: 0x1, type: 0x3)
		Ionic::ComparisonOperator Operator; // 0x14 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x18
}
