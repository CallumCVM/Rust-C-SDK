#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Configuration\ConfigurationUserLevel.h"

namespace System
{
	namespace Configuration
{
	class ExeContext : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* path; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Configuration::ConfigurationUserLevel level; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
