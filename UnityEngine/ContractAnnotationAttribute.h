#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace JetBrains
{
	namespace Annotations
{
	class ContractAnnotationAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Contract>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		bool <ForceFullStates>k__BackingField; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
