#pragma once

#include "..\UnityEngine\AndroidJavaRunnable.h"

namespace UnityEngine
{
	class AndroidJavaRunnableProxy : public AndroidJavaProxy // 0x18
	{
	public:
		UnityEngine::AndroidJavaRunnable* mRunnable; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
