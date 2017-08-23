#pragma once

#include "..\Facepunch\Models\Manifest\NewsInfo\StatusInfo.h"

namespace rust 
{
	class NewsInfo : public Object // 0x0
	{
	public:
		Facepunch::Models::Manifest::NewsInfo::StatusInfo* Status; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x18
}
