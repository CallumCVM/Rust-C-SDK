#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Configuration\SettingsProvider.h"
#include "..\System\Object.h"
#include "..\System\Configuration\SettingsSerializeAs.h"
#include "..\System\Configuration\SettingsAttributeDictionary.h"

namespace System
{
	namespace Configuration
{
	class SettingsProperty : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* propertyType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::SettingsProvider* provider; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object defaultValue; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Configuration::SettingsAttributeDictionary* attributes; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool isReadOnly; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		System::Configuration::SettingsSerializeAs serializeAs; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
		bool throwOnErrorDeserializing; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool throwOnErrorSerializing; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
