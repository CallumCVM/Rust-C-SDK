#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationErrorsException : public ConfigurationException // 0x70
	{
	public:
		UnityEngine::UnicodeString* filename; // 0x70 (size: 0x8, flags: 0x21, type: 0xe)
		int line; // 0x78 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x80
}
