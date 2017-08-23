#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Rust\Workshop\DropChance.h"

namespace rust 
{
	class Item : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* type; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* price_category; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* icon_url; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* icon_url_large; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* market_hash_name; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* market_name; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* bundle; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* description; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* workshopid; // 0x58 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* itemshortname; // 0x60 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* tags; // 0x68 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* store_tags; // 0x70 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* exchange; // 0x78 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* background_color; // 0x80 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* name_color; // 0x88 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* workshopdownload; // 0x90 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned int itemdefid; // 0x98 (size: 0x4, flags: 0x6, type: 0x9)
		bool marketable; // 0x9c (size: 0x1, flags: 0x6, type: 0x2)
		bool tradable; // 0x9d (size: 0x1, flags: 0x6, type: 0x2)
		bool commodity; // 0x9e (size: 0x1, flags: 0x6, type: 0x2)
		bool store_hidden; // 0x9f (size: 0x1, flags: 0x6, type: 0x2)
		Rust::Workshop::DropChance dropChance; // 0xa0 (size: 0x4, flags: 0x86, type: 0x11)
	}; // size = 0xa8
}
