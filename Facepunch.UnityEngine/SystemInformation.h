#pragma once

#include "..\Facepunch\SystemInformation\Hardware.h"
#include "..\Facepunch\SystemInformation\Environment.h"

namespace Facepunch
{
	class SystemInformation : public Object // 0x0
	{
	public:
		Facepunch::SystemInformation::Hardware hardware; // 0x10 (size: 0x1, flags: 0x6, type: 0x11)
		Facepunch::SystemInformation::Environment environment; // 0x11 (size: 0x1, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
