#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ConfigurationElementCollectionType.h"
#include "..\System\Type.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationCollectionAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* addItemName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* clearItemsName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* removeItemName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* itemType; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationElementCollectionType collectionType; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
