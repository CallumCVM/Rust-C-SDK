#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class IgnoreSection : public ConfigurationSection // 0x90
	{
	public:
		UnityEngine::UnicodeString* xml; // 0x90 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x98
}
