#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Globalization
{
	class Calendar : public Object // 0x0
	{
	public:
		bool m_isReadOnly; // 0x10 (size: 0x1, flags: 0x81, type: 0x2)
		int twoDigitYearMax; // 0x14 (size: 0x4, flags: 0x83, type: 0x8)
		int M_MaxYearValue; // 0x18 (size: 0x4, flags: 0x81, type: 0x8)
		UnityEngine::UnicodeString** M_AbbrEraNames; // 0x20 (size: 0x8, flags: 0x83, type: 0x1d)
		UnityEngine::UnicodeString** M_EraNames; // 0x28 (size: 0x8, flags: 0x83, type: 0x1d)
		int m_currentEraValue; // 0x30 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x38
}
