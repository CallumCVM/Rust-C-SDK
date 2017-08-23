#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
	class MultipartFormFileSection : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* data; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* file; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* content; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
