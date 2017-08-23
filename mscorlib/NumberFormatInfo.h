#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Globalization
{
	class NumberFormatInfo : public Object // 0x0
	{
	public:
		bool isReadOnly; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* decimalFormats; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* currencyFormats; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* percentFormats; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* digitPattern; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* zeroPattern; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		int currencyDecimalDigits; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* currencyDecimalSeparator; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* currencyGroupSeparator; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		int* currencyGroupSizes; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		int currencyNegativePattern; // 0x60 (size: 0x4, flags: 0x1, type: 0x8)
		int currencyPositivePattern; // 0x64 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* currencySymbol; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* nanSymbol; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* negativeInfinitySymbol; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* negativeSign; // 0x80 (size: 0x8, flags: 0x1, type: 0xe)
		int numberDecimalDigits; // 0x88 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* numberDecimalSeparator; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* numberGroupSeparator; // 0x98 (size: 0x8, flags: 0x1, type: 0xe)
		int* numberGroupSizes; // 0xa0 (size: 0x8, flags: 0x1, type: 0x1d)
		int numberNegativePattern; // 0xa8 (size: 0x4, flags: 0x1, type: 0x8)
		int percentDecimalDigits; // 0xac (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* percentDecimalSeparator; // 0xb0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* percentGroupSeparator; // 0xb8 (size: 0x8, flags: 0x1, type: 0xe)
		int* percentGroupSizes; // 0xc0 (size: 0x8, flags: 0x1, type: 0x1d)
		int percentNegativePattern; // 0xc8 (size: 0x4, flags: 0x1, type: 0x8)
		int percentPositivePattern; // 0xcc (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* percentSymbol; // 0xd0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* perMilleSymbol; // 0xd8 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* positiveInfinitySymbol; // 0xe0 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* positiveSign; // 0xe8 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* ansiCurrencySymbol; // 0xf0 (size: 0x8, flags: 0x1, type: 0xe)
		int m_dataItem; // 0xf8 (size: 0x4, flags: 0x1, type: 0x8)
		bool m_useUserOverride; // 0xfc (size: 0x1, flags: 0x1, type: 0x2)
		bool validForParseAsNumber; // 0xfd (size: 0x1, flags: 0x1, type: 0x2)
		bool validForParseAsCurrency; // 0xfe (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString** nativeDigits; // 0x100 (size: 0x8, flags: 0x1, type: 0x1d)
		int digitSubstitution; // 0x108 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x110
}
