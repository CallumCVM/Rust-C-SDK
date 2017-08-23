#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace EasyAntiCheat
{
	namespace Client
{
	class IntegrityDescriptor : public ValueType // 0x0
	{
	public:
		bool <Violated>k__BackingField; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* <ViolationMessage>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
