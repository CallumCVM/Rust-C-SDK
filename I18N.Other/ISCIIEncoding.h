#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace I18N
{
	namespace Other
{
	class ISCIIEncoding : public MonoEncoding // 0x60
	{
	public:
		UnityEngine::UnicodeString* encodingName; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* webName; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		int shift; // 0x70 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x78
}
