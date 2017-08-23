#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class WWWForm : public Object // 0x0
	{
	public:
		UnityEngine::List<unsigned char[]>* formData; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine::UnicodeString*>* fieldNames; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine::UnicodeString*>* fileNames; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine::UnicodeString*>* types; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		unsigned char* boundary; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		bool containsFiles; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
