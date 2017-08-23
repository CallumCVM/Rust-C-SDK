#pragma once

#include "..\GPU\DeviceRequest\State.h"

namespace GPU
{
	class DeviceRequest : public Object // 0x0
	{
	public:
		__int64 request; // 0x10 (size: 0x8, flags: 0x4, type: 0x18)
		GPU::DeviceRequest::State state; // 0x18 (size: 0x4, flags: 0x4, type: 0x11)
		__int64 result; // 0x20 (size: 0x8, flags: 0x4, type: 0x18)
	}; // size = 0x28
}
