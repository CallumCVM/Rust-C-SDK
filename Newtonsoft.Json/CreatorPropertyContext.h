#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Newtonsoft\Json\Serialization\JsonProperty.h"
#include "..\System\Nullable<Newtonsoft\Json\Serialization\JsonSerializerInternalReader\PropertyPresence>.h"
#include "..\System\Object.h"

namespace rust 
{
	class CreatorPropertyContext : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Name; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		Newtonsoft::Json::Serialization::JsonProperty* Property; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Newtonsoft::Json::Serialization::JsonProperty* ConstructorProperty; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		System::Object Value; // 0x28 (size: 0x8, flags: 0x6, type: 0x1c)
		System::Nullable<Newtonsoft::Json::Serialization::JsonSerializerInternalReader::PropertyPresence> Presence; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		bool Used; // 0x38 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x40
}
