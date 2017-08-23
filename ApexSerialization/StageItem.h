#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Apex\Serialization\StageContainer.h"
#include "..\Apex\Serialization\StageItem.h"

namespace Apex
{
	namespace Serialization
{
	class StageItem : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <name>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Apex::Serialization::StageContainer* <parent>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::Serialization::StageItem* <next>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
