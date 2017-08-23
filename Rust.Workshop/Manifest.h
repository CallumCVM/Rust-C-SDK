#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"
#include "..\Rust\Workshop\Skin\Manifest\Group.h"

namespace rust 
{
	class Manifest : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <ItemType>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Rust::Workshop::Skin::Manifest::Group* <Groups>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		int <Version>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned __int64 <AuthorId>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xb)
		System::DateTime <PublishDate>k__BackingField; // 0x30 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
