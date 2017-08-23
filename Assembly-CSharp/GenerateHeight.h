#pragma once

#include "NoiseParameters.h"

namespace rust 
{
	class GenerateHeight : public ProceduralComponent // 0x28
	{
	public:
		NoiseParameters Shape; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
		NoiseParameters Base; // 0x38 (size: 0x10, flags: 0x1, type: 0x11)
		NoiseParameters Lake; // 0x48 (size: 0x10, flags: 0x1, type: 0x11)
		NoiseParameters Dune; // 0x58 (size: 0x10, flags: 0x1, type: 0x11)
		NoiseParameters Plain; // 0x68 (size: 0x10, flags: 0x1, type: 0x11)
		NoiseParameters Hill; // 0x78 (size: 0x10, flags: 0x1, type: 0x11)
		NoiseParameters Mountain; // 0x88 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x98
}
