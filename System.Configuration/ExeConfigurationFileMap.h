#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class ExeConfigurationFileMap : public ConfigurationFileMap // 0x18
	{
	public:
		UnityEngine::UnicodeString* exeConfigFilename; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* localUserConfigFilename; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* roamingUserConfigFilename; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
