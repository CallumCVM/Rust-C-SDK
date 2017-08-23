#pragma once

#include "..\System\Reflection\ModuleResolveEventHandler.h"

namespace rust 
{
	class ResolveEventHolder : public Object // 0x0
	{
	public:
		System::Reflection::ModuleResolveEventHandler* ModuleResolve; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
