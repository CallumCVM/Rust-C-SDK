#pragma once

#include "..\System\Globalization\DateTimeStyles.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Globalization\CultureInfo.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Converters
{
	class IsoDateTimeConverter : public DateTimeConverterBase // 0x0
	{
	public:
		UnityEngine::UnicodeString* _dateTimeFormat; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Globalization::CultureInfo* _culture; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Globalization::DateTimeStyles _dateTimeStyles; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
