#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Globalization\Calendar.h"
#include "..\System\Globalization\DateTimeFormatFlags.h"

namespace System
{
	namespace Globalization
{
	class DateTimeFormatInfo : public Object // 0x0
	{
	public:
		bool m_isReadOnly; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* amDesignator; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* pmDesignator; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* dateSeparator; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* timeSeparator; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* shortDatePattern; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* longDatePattern; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* shortTimePattern; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* longTimePattern; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* monthDayPattern; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* yearMonthPattern; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* fullDateTimePattern; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _RFC1123Pattern; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _SortableDateTimePattern; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _UniversalSortableDateTimePattern; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		int firstDayOfWeek; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		System::Globalization::Calendar* calendar; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		int calendarWeekRule; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString** abbreviatedDayNames; // 0xa0 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** dayNames; // 0xa8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** monthNames; // 0xb0 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** abbreviatedMonthNames; // 0xb8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** allShortDatePatterns; // 0xc0 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** allLongDatePatterns; // 0xc8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** allShortTimePatterns; // 0xd0 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** allLongTimePatterns; // 0xd8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** monthDayPatterns; // 0xe0 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** yearMonthPatterns; // 0xe8 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** shortDayNames; // 0xf0 (size: 0x8, flags: 0x1, type: 0x1d)
		int nDataItem; // 0xf8 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_useUserOverride; // 0xfc (size: 0x1, flags: 0x1, type: 0x2)
		bool m_isDefaultCalendar; // 0xfd (size: 0x1, flags: 0x1, type: 0x2)
		int CultureID; // 0x100 (size: 0x4, flags: 0x1, type: 0x8)
		bool bUseCalendarInfo; // 0x104 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* generalShortTimePattern; // 0x108 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* generalLongTimePattern; // 0x110 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** m_eraNames; // 0x118 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_abbrevEraNames; // 0x120 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_abbrevEnglishEraNames; // 0x128 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_dateWords; // 0x130 (size: 0x8, flags: 0x1, type: 0x1d)
		int* optionalCalendars; // 0x138 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_superShortDayNames; // 0x140 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** genitiveMonthNames; // 0x148 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_genitiveAbbreviatedMonthNames; // 0x150 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** leapYearMonthNames; // 0x158 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Globalization::DateTimeFormatFlags formatFlags; // 0x160 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* m_name; // 0x168 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** all_date_time_patterns; // 0x170 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x178
}
