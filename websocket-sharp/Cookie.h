#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Uri.h"
#include "..\System\DateTime.h"

namespace WebSocketSharp
{
	namespace Net
{
	class Cookie : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _comment; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Uri* _commentUri; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _domain; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _path; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _port; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		int* _ports; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _value; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		bool _discard; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime _expires; // 0x58 (size: 0x10, flags: 0x1, type: 0x11)
		bool _httpOnly; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool _secure; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime _timestamp; // 0x70 (size: 0x10, flags: 0x1, type: 0x11)
		int _version; // 0x80 (size: 0x4, flags: 0x1, type: 0x8)
		bool <ExactDomain>k__BackingField; // 0x84 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x88
}
