#pragma once

#include "..\I18N\CJK\DbcsConvert.h"

namespace rust 
{
	class DbcsDecoder : public Decoder // 0x20
	{
	public:
		I18N::CJK::DbcsConvert* convert; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x28
}
