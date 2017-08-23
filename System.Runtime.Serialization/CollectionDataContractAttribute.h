#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class CollectionDataContractAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* ns; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* item_name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* key_name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* value_name; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool is_reference; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsReference>k__BackingField; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
