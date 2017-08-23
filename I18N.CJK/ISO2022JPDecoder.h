#pragma once

#include "..\I18N\CJK\ISO2022JPMode.h"

namespace I18N
{
	namespace CJK
{
	class ISO2022JPDecoder : public Decoder // 0x20
	{
	public:
		bool allow_shift_io; // 0x20 (size: 0x1, flags: 0x21, type: 0x2)
		I18N::CJK::ISO2022JPMode m; // 0x24 (size: 0x4, flags: 0x1, type: 0x11)
		bool shifted_in_conv; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool shifted_in_count; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
