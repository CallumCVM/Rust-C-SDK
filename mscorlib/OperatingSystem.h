#pragma once

#include "..\System\PlatformID.h"
#include "..\System\Version.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	class OperatingSystem : public Object // 0x0
	{
	public:
		System::PlatformID _platform; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Version* _version; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _servicePack; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
