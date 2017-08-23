#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class RecipientInfo : public Object // 0x0
	{
	public:
		int _version; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* _oid; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* _key; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _ski; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _issuer; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* _serial; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x40
}
