#pragma once

#include "..\System\Globalization\CCEastAsianLunisolarEraHandler.h"

namespace System
{
	namespace Globalization
{
	class EastAsianLunisolarCalendar : public Calendar // 0x38
	{
	public:
		System::Globalization::CCEastAsianLunisolarEraHandler* M_EraHandler; // 0x38 (size: 0x8, flags: 0x23, type: 0x12)
	}; // size = 0x40
}
