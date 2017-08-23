#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Facepunch
{
	namespace Models
{
	class PlayerInfo : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Name>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <Id>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
