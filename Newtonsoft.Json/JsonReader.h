#pragma once

#include "..\Newtonsoft\Json\JsonToken.h"
#include "..\System\Object.h"
#include "..\System\Char.h"
#include "..\Newtonsoft\Json\JsonReader\State.h"
#include "..\Newtonsoft\Json\JsonPosition.h"
#include "..\System\Globalization\CultureInfo.h"
#include "..\Newtonsoft\Json\DateTimeZoneHandling.h"
#include "..\Newtonsoft\Json\DateParseHandling.h"
#include "..\Newtonsoft\Json\FloatParseHandling.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonReader : public Object // 0x0
	{
	public:
		System::Object _value; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		Newtonsoft::Json::JsonPosition _currentPosition; // 0x18 (size: 0x18, flags: 0x1, type: 0x11)
		System::Globalization::CultureInfo* _culture; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _dateFormatString; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::List<Newtonsoft.Json.JsonPosition>* _stack; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::JsonToken _tokenType; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
		System::Char _quoteChar; // 0x4c (size: 0x2, flags: 0x3, type: 0x3)
		Newtonsoft::Json::JsonReader::State _currentState; // 0x50 (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::DateTimeZoneHandling _dateTimeZoneHandling; // 0x54 (size: 0x4, flags: 0x1, type: 0x11)
		System.Nullable<int> _maxDepth; // 0x58 (size: 0x8, flags: 0x1, type: 0x15)
		bool _hasExceededMaxDepth; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
		Newtonsoft::Json::DateParseHandling _dateParseHandling; // 0x64 (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::FloatParseHandling _floatParseHandling; // 0x68 (size: 0x4, flags: 0x3, type: 0x11)
		bool <CloseInput>k__BackingField; // 0x6c (size: 0x1, flags: 0x1, type: 0x2)
		bool <SupportMultipleContent>k__BackingField; // 0x6d (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
