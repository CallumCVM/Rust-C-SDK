#pragma once

#include "..\System\Globalization\NumberFormatInfo.h"
#include "..\System\Char.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Mono
{
	namespace Xml
{
{
		namespace Xsl
{
	class XslDecimalFormat : public Object // 0x0
	{
	public:
		System::Globalization::NumberFormatInfo* info; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* baseUri; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Char digit; // 0x20 (size: 0x2, flags: 0x1, type: 0x3)
		System::Char zeroDigit; // 0x22 (size: 0x2, flags: 0x1, type: 0x3)
		System::Char patternSeparator; // 0x24 (size: 0x2, flags: 0x1, type: 0x3)
		int lineNumber; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int linePosition; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
