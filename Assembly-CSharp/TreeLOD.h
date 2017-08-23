#pragma once

#include "..\TreeLOD\State.h"

namespace rust 
{
	class TreeLOD : public LODComponent // 0x28
	{
	public:
		TreeLOD::State* States; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		int curlod; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		bool force; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
