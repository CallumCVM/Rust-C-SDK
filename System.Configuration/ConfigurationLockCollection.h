#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\System\Configuration\ConfigurationElement.h"
#include "..\System\Configuration\ConfigurationLockType.h"
#include "..\System\Collections\Hashtable.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationLockCollection : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* names; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationElement* element; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* valid_name_hash; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* valid_names; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationLockType lockType; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		bool is_modified; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
