#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Globalization\CultureInfo.h"
#include "..\System\Globalization\TextInfo\Data.h"

namespace System
{
	namespace Globalization
{
	class TextInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_listSeparator; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool m_isReadOnly; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* customCultureName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int m_nDataItem; // 0x28 (size: 0x4, flags: 0x81, type: 0x8)
		bool m_useUserOverride; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
		int m_win32LangID; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		System::Globalization::CultureInfo* ci; // 0x38 (size: 0x8, flags: 0xa1, type: 0x12)
		bool handleDotI; // 0x40 (size: 0x1, flags: 0xa1, type: 0x2)
		System::Globalization::TextInfo::Data data; // 0x44 (size: 0x14, flags: 0xa1, type: 0x11)
	}; // size = 0x58
}
