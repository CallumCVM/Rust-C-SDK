#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\EasyAntiCheat\Client\InstallerInfo.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class LoadInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Arguments>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Filename>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		EasyAntiCheat::Client::InstallerInfo* <Installer>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool <LoadOnly>k__BackingField; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
