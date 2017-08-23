#pragma once

#include "TOD_Sky.h"

namespace rust 
{
	class DevEnvironment : public DevControlsTab // 0x18
	{
	public:
		TOD_Sky* sky; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x20
}
