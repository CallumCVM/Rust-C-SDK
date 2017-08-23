#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\Configuration.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationLocation : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* path; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::Configuration* configuration; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Configuration::Configuration* parent; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* xmlContent; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool parentResolved; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool allowOverride; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
