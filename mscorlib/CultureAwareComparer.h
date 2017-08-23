#pragma once

#include "..\System\Globalization\CompareInfo.h"

namespace System
{
	class CultureAwareComparer : public StringComparer // 0x0
	{
	public:
		bool _ignoreCase; // 0x10 (size: 0x1, flags: 0x21, type: 0x2)
		System::Globalization::CompareInfo* _compareInfo; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x20
}
