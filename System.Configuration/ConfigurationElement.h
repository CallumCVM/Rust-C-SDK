#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ElementMap.h"
#include "..\System\Configuration\ConfigurationPropertyCollection.h"
#include "..\System\Configuration\ConfigurationElementCollection.h"
#include "..\System\Configuration\ElementInformation.h"
#include "..\System\Configuration\ConfigurationElementProperty.h"
#include "..\System\Configuration\Configuration.h"
#include "..\System\Configuration\ConfigurationLockCollection.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationElement : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* rawXml; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ElementMap* map; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationPropertyCollection* keyProps; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationElementCollection* defaultCollection; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ElementInformation* elementInfo; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationElementProperty* elementProperty; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::Configuration* _configuration; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationLockCollection* lockAllAttributesExcept; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationLockCollection* lockAllElementsExcept; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationLockCollection* lockAttributes; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::ConfigurationLockCollection* lockElements; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		bool modified; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		bool readOnly; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		bool lockItem; // 0x6a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
