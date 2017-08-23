#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Object.h"
#include "..\System\Configuration\ConfigurationPropertyOptions.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationPropertyAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object default_value; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Configuration::ConfigurationPropertyOptions flags; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
