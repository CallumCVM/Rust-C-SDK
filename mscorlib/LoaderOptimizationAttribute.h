#pragma once

#include "..\System\LoaderOptimization.h"

namespace System
{
	class LoaderOptimizationAttribute : public Attribute // 0x0
	{
	public:
		System::LoaderOptimization lo; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
