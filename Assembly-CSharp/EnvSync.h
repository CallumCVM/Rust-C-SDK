#pragma once

#include "..\System\TimeSpan.h"

namespace rust 
{
	class EnvSync : public PointEntity // 0x130
	{
	public:
		System::TimeSpan timeSpan; // 0x130 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x138
}
