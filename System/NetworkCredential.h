#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
	class NetworkCredential : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* userName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* password; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* domain; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
