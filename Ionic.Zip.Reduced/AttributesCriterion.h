#pragma once

#include "..\System\IO\FileAttributes.h"
#include "..\Ionic\ComparisonOperator.h"

namespace Ionic
{
	class AttributesCriterion : public SelectionCriterion // 0x18
	{
	public:
		System::IO::FileAttributes _Attributes; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
		Ionic::ComparisonOperator Operator; // 0x18 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x20
}
