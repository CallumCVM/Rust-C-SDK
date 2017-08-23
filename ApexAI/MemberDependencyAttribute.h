#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\ValueType.h"
#include "..\Apex\MaskMatch.h"
#include "..\Apex\AI\CompareOperator.h"

namespace Apex
{
	namespace AI
{
	class MemberDependencyAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* <dependsOn>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::ValueType* <value>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Apex::MaskMatch <match>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		Apex::AI::CompareOperator <compare>k__BackingField; // 0x24 (size: 0x4, flags: 0x1, type: 0x11)
		bool <isMask>k__BackingField; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
