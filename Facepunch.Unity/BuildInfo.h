#pragma once

#include "..\Facepunch\BuildInfo\ScmInfo.h"
#include "..\Facepunch\BuildInfo\BuildDesc.h"

namespace Facepunch
{
	class BuildInfo : public Object // 0x0
	{
	public:
		Facepunch::BuildInfo::ScmInfo* <Scm>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::BuildInfo::BuildDesc* <Build>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int <Date>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool <Valid>k__BackingField; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
