#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Uri.h"
#include "..\System\DateTime.h"

namespace System
{
	namespace Net
{
	class Cookie : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* comment; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Uri* commentUri; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* domain; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* path; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* port; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		int* ports; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* val; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		bool discard; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime expires; // 0x58 (size: 0x10, flags: 0x1, type: 0x11)
		bool httpOnly; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool secure; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime timestamp; // 0x70 (size: 0x10, flags: 0x1, type: 0x11)
		int version; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		bool exact_domain; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x88
}
