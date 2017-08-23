#pragma once

#include "..\UnityEngine\List.h"
#include "..\Newtonsoft\Json\JsonPosition.h"
#include "..\Newtonsoft\Json\JsonWriter\State.h"
#include "..\Newtonsoft\Json\Formatting.h"
#include "..\Newtonsoft\Json\DateFormatHandling.h"
#include "..\Newtonsoft\Json\DateTimeZoneHandling.h"
#include "..\Newtonsoft\Json\StringEscapeHandling.h"
#include "..\Newtonsoft\Json\FloatFormatHandling.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Globalization\CultureInfo.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonWriter : public Object // 0x0
	{
	public:
		UnityEngine::List<Newtonsoft.Json.JsonPosition>* _stack; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::JsonPosition _currentPosition; // 0x18 (size: 0x18, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* _dateFormatString; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Globalization::CultureInfo* _culture; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::JsonWriter::State _currentState; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		Newtonsoft::Json::Formatting _formatting; // 0x44 (size: 0x4, flags: 0x1, type: 0x11)
		bool <CloseOutput>k__BackingField; // 0x48 (size: 0x1, flags: 0x1, type: 0x2)
		Newtonsoft::Json::DateFormatHandling _dateFormatHandling; // 0x4c (size: 0x4, flags: 0x1, type: 0x11)
		Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling; // 0x50 (size: 0x4, flags: 0x1, type: 0x11)
		Newtonsoft::Json::StringEscapeHandling _stringEscapeHandling; // 0x54 (size: 0x4, flags: 0x1, type: 0x11)
		Newtonsoft::Json::FloatFormatHandling _floatFormatHandling; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x60
}
