#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ScmInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Type>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <ChangeId>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Branch>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Repo>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Comment>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Author>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Date>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Items>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
