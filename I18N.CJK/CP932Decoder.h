#pragma once

#include "..\I18N\CJK\JISConvert.h"

namespace I18N
{
	namespace CJK
{
	class CP932Decoder : public DbcsDecoder // 0x28
	{
	public:
		I18N::CJK::JISConvert* convert; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int last_byte_count; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int last_byte_chars; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
