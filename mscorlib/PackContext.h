#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\DataConverter.h"

namespace rust 
{
	class PackContext : public Object // 0x0
	{
	public:
		unsigned char* buffer; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		int next; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* description; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		int i; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		Mono::DataConverter* conv; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		int repeat; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int align; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x40
}
