#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Object.h"
#include "..\System\ComponentModel\TypeConverter.h"
#include "..\System\Configuration\ConfigurationValidatorBase.h"
#include "..\System\Configuration\ConfigurationPropertyOptions.h"
#include "..\System\Configuration\ConfigurationCollectionAttribute.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationProperty : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* type; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object default_value; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		System::ComponentModel::TypeConverter* converter; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationValidatorBase* validation; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* description; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationCollectionAttribute* collectionAttribute; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationPropertyOptions flags; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
