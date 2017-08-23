#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"
#include "..\System\Configuration\PropertyValueOrigin.h"
#include "..\System\Configuration\ConfigurationElement.h"
#include "..\System\Configuration\ConfigurationProperty.h"

namespace System
{
	namespace Configuration
{
	class PropertyInformation : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* source; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object val; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Configuration::ConfigurationElement* owner; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
		System::Configuration::ConfigurationProperty* property; // 0x28 (size: 0x8, flags: 0x21, type: 0x12)
		bool isLocked; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool isModified; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		int lineNumber; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		System::Configuration::PropertyValueOrigin origin; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
