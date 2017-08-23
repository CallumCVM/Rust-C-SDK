#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class AndroidJavaException : public Exception // 0x60
	{
	public:
		UnityEngine::UnicodeString* mJavaStackTrace; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x68
}
