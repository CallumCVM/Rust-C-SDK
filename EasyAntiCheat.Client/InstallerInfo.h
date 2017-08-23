#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class InstallerInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Filename>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool <Allow>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool <Visible>k__BackingField; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
