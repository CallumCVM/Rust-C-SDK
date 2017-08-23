#pragma once

#include "..\RendererLOD\State.h"
#include "RendererBatch.h"

namespace rust 
{
	class RendererLOD : public LODComponent // 0x28
	{
	public:
		RendererLOD::State* States; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		RendererBatch* meshBatch; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		int curlod; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool force; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
