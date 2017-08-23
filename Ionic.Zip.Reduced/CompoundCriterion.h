#pragma once

#include "..\Ionic\LogicalConjunction.h"
#include "..\Ionic\SelectionCriterion.h"

namespace Ionic
{
	class CompoundCriterion : public SelectionCriterion // 0x18
	{
	public:
		Ionic::SelectionCriterion* Left; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		Ionic::SelectionCriterion* _Right; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Ionic::LogicalConjunction Conjunction; // 0x28 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x30
}
