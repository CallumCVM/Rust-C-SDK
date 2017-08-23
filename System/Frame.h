#pragma once

#include "..\System\Reflection\Emit\Label.h"

namespace rust 
{
	class Frame : public Object // 0x0
	{
	public:
		System::Reflection::Emit::Label label_pass; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		System::Reflection::Emit::Label label_fail; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
