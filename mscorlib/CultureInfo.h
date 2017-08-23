#pragma once

#include "..\System\Globalization\NumberFormatInfo.h"
#include "..\System\Globalization\DateTimeFormatInfo.h"
#include "..\System\Globalization\TextInfo.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Globalization\CompareInfo.h"
#include "..\System\Void*.h"
#include "..\System\Globalization\Calendar.h"
#include "..\System\Globalization\CultureInfo.h"

namespace System
{
	namespace Globalization
{
	class CultureInfo : public Object // 0x0
	{
	public:
		bool m_isReadOnly; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		int cultureID; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int parent_lcid; // 0x18 (size: 0x4, flags: 0x81, type: 0x8)
		int specific_lcid; // 0x1c (size: 0x4, flags: 0x81, type: 0x8)
		int datetime_index; // 0x20 (size: 0x4, flags: 0x81, type: 0x8)
		int number_index; // 0x24 (size: 0x4, flags: 0x81, type: 0x8)
		bool m_useUserOverride; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		System::Globalization::NumberFormatInfo* numInfo; // 0x30 (size: 0x8, flags: 0x81, type: 0x12)
		System::Globalization::DateTimeFormatInfo* dateTimeInfo; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Globalization::TextInfo* textInfo; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_name; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* displayname; // 0x50 (size: 0x8, flags: 0x81, type: 0xe)
		UnityEngine::UnicodeString* englishname; // 0x58 (size: 0x8, flags: 0x81, type: 0xe)
		UnityEngine::UnicodeString* nativename; // 0x60 (size: 0x8, flags: 0x81, type: 0xe)
		UnityEngine::UnicodeString* iso3lang; // 0x68 (size: 0x8, flags: 0x81, type: 0xe)
		UnityEngine::UnicodeString* iso2lang; // 0x70 (size: 0x8, flags: 0x81, type: 0xe)
		UnityEngine::UnicodeString* icu_name; // 0x78 (size: 0x8, flags: 0x81, type: 0xe)
		UnityEngine::UnicodeString* win3lang; // 0x80 (size: 0x8, flags: 0x81, type: 0xe)
		UnityEngine::UnicodeString* territory; // 0x88 (size: 0x8, flags: 0x81, type: 0xe)
		System::Globalization::CompareInfo* compareInfo; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		int* calendar_data; // 0x98 (size: 0x8, flags: 0xa1, type: 0xf)
		System::Void* textinfo_data; // 0xa0 (size: 0x8, flags: 0xa1, type: 0xf)
		System::Globalization::Calendar* optional_calendars; // 0xa8 (size: 0x8, flags: 0x81, type: 0x1d)
		System::Globalization::CultureInfo* parent_culture; // 0xb0 (size: 0x8, flags: 0x81, type: 0x12)
		int m_dataItem; // 0xb8 (size: 0x4, flags: 0x1, type: 0x8)
		System::Globalization::Calendar* calendar; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		bool constructed; // 0xc8 (size: 0x1, flags: 0x81, type: 0x2)
		unsigned char* cached_serialized_form; // 0xd0 (size: 0x8, flags: 0x83, type: 0x1d)
	}; // size = 0xd8
}
