#pragma once

#include "..\CoverageQueries\Query\Input.h"
#include "..\CoverageQueries\Query\Internal.h"
#include "..\CoverageQueries\Query\Result.h"

namespace rust 
{
	class Query : public Object // 0x0
	{
	public:
		CoverageQueries::Query::Input input; // 0x10 (size: 0x18, flags: 0x6, type: 0x11)
		CoverageQueries::Query::Internal intern; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
		CoverageQueries::Query::Result result; // 0x2c (size: 0x24, flags: 0x6, type: 0x11)
	}; // size = 0x50
}
