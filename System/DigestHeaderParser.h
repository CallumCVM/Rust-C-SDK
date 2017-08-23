#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
	class DigestHeaderParser : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* header; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** values; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int length; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		int pos; // 0x24 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
