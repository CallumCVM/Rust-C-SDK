#pragma once

#include "..\System\Collections\Generic\IDictionary<System\Type,SimpleJson\Reflection\ReflectionUtils\ConstructorDelegate>.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace SimpleJson
{
	class PocoJsonSerializerStrategy : public Object // 0x0
	{
	public:
		System::Collections::Generic::IDictionary<System::Type,SimpleJson::Reflection::ReflectionUtils::ConstructorDelegate> ConstructorCache; // 0x10 (size: 0x8, flags: 0x3, type: 0x15)
		System.Collections.Generic.IDictionary<System.Type,System.Collections.Generic.IDictionary<UnityEngine::UnicodeString*,SimpleJson.Reflection.ReflectionUtils.GetDelegate>> GetCache; // 0x18 (size: 0x8, flags: 0x3, type: 0x15)
		System.Collections.Generic.IDictionary<System.Type,System.Collections.Generic.IDictionary<UnityEngine::UnicodeString*,System.Collections.Generic.KeyValuePair<System.Type,SimpleJson.Reflection.ReflectionUtils.SetDelegate>>> SetCache; // 0x20 (size: 0x8, flags: 0x3, type: 0x15)
	}; // size = 0x28
}
