#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Globalization\NumberFormatInfo.h"
#include "..\System\Text\StringBuilder.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class DecimalFormatPattern : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Prefix; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Suffix; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* NumberPart; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		System::Globalization::NumberFormatInfo* info; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* builder; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
