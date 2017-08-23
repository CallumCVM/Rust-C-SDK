#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Configuration
{
	class ConfigurationException : public SystemException // 0x60
	{
	public:
		UnityEngine::UnicodeString* filename; // 0x60 (size: 0x8, flags: 0x21, type: 0xe)
		int line; // 0x68 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x70
}
