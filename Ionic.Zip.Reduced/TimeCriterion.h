#pragma once

#include "..\Ionic\ComparisonOperator.h"
#include "..\Ionic\WhichTime.h"
#include "..\System\DateTime.h"

namespace Ionic
{
	class TimeCriterion : public SelectionCriterion // 0x18
	{
	public:
		Ionic::ComparisonOperator Operator; // 0x14 (size: 0x4, flags: 0x3, type: 0x11)
		Ionic::WhichTime Which; // 0x18 (size: 0x4, flags: 0x3, type: 0x11)
		System::DateTime Time; // 0x20 (size: 0x10, flags: 0x3, type: 0x11)
	}; // size = 0x30
}
