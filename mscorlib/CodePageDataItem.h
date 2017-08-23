#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Globalization
{
	class CodePageDataItem : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_bodyName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		int m_codePage; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int m_dataIndex; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* m_description; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned int m_flags; // 0x28 (size: 0x4, flags: 0x1, type: 0x9)
		UnityEngine::UnicodeString* m_headerName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		int m_uiFamilyCodePage; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* m_webName; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x48
}
