#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\Dictionary<System\Type,System\Object>.h"

namespace rust 
{
	class AttributeCollection : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<System.Type,UnityEngine::List<PrefabAttribute>>* attributes; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::Dictionary<System::Type,System::Object> cache; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
