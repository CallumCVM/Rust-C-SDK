#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Apex
{
	namespace Serialization
{
	class StageValue : public StageItem // 0x28
	{
	public:
		UnityEngine::UnicodeString* _value; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool <isText>k__BackingField; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
