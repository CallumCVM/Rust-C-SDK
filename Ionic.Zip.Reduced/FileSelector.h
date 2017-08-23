#pragma once

#include "..\Ionic\SelectionCriterion.h"

namespace Ionic
{
	class FileSelector : public Object // 0x0
	{
	public:
		Ionic::SelectionCriterion* _Criterion; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		bool <TraverseReparsePoints>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
