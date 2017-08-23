#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlNameEntry : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Prefix; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* LocalName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* NS; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* prefixed_name_cache; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		int Hash; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
