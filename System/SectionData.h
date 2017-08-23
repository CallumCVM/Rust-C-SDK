#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\AllowDefinition.h"

namespace System
{
	namespace Configuration
{
	class SectionData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* SectionName; // 0x10 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* TypeName; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* FileName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		bool AllowLocation; // 0x28 (size: 0x1, flags: 0x26, type: 0x2)
		System::Configuration::AllowDefinition AllowDefinition; // 0x2c (size: 0x4, flags: 0x26, type: 0x11)
		bool RequirePermission; // 0x30 (size: 0x1, flags: 0x26, type: 0x2)
	}; // size = 0x38
}
