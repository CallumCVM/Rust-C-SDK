#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace EasyAntiCheat
{
	namespace Server
{
	class ServerConfiguration : public ValueType // 0x0
	{
	public:
		int <RegisterTimeout>k__BackingField; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* <ServerName>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
