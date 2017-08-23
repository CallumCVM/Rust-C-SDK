#pragma once

#include "..\System\Globalization\GregorianCalendarTypes.h"

namespace System
{
	namespace Globalization
{
	class GregorianCalendar : public Calendar // 0x38
	{
	public:
		System::Globalization::GregorianCalendarTypes m_type; // 0x38 (size: 0x4, flags: 0x83, type: 0x11)
	}; // size = 0x40
}
