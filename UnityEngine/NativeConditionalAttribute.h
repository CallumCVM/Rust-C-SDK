#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Unity
{
	namespace Bindings
{
	class NativeConditionalAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Condition>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool <Enabled>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
