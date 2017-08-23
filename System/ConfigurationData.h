#pragma once

#include "..\System\Configuration\ConfigurationData.h"
#include "..\System\Collections\Hashtable.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationData : public Object // 0x0
	{
	public:
		System::Configuration::ConfigurationData* parent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* factories; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* pending; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* fileName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::Hashtable* cache; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
