#pragma once

#include "..\CoverageQueries\Query.h"

namespace rust 
{
	class CoverageQueryFlare : public SimpleFlare // 0x70
	{
	public:
		CoverageQueries::Query* query; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		float coverageRadius; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		bool useFallback; // 0x7c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
