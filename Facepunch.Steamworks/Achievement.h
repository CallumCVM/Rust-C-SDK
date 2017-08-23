#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"
#include "..\Facepunch\Steamworks\Image.h"

namespace Facepunch
{
	namespace Steamworks
{
	class Achievement : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <Id>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Name>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Description>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		Facepunch::Steamworks::Image* _icon; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool <State>k__BackingField; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTime <UnlockTime>k__BackingField; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		int <iconId>k__BackingField; // 0x50 (size: 0x4, flags: 0x1, type: 0x8)
		int refreshCount; // 0x54 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x58
}
