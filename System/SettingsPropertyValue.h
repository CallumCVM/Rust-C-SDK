#pragma once

#include "..\System\Configuration\SettingsProperty.h"
#include "..\System\Object.h"

namespace System
{
	namespace Configuration
{
	class SettingsPropertyValue : public Object // 0x0
	{
	public:
		System::Configuration::SettingsProperty* property; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		System::Object propertyValue; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object serializedValue; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		bool needSerializedValue; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool needPropertyValue; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		bool dirty; // 0x2a (size: 0x1, flags: 0x1, type: 0x2)
		bool defaulted; // 0x2b (size: 0x1, flags: 0x1, type: 0x2)
		bool deserialized; // 0x2c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
