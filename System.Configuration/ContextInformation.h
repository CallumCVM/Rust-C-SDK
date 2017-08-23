#pragma once

#include "..\System\Object.h"
#include "..\System\Configuration\Configuration.h"

namespace System
{
	namespace Configuration
{
	class ContextInformation : public Object // 0x0
	{
	public:
		System::Object ctx; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Configuration::Configuration* config; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
