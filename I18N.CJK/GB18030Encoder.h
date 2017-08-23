#pragma once

#include "..\System\Char.h"

namespace I18N
{
	namespace CJK
{
	class GB18030Encoder : public MonoEncoder // 0x28
	{
	public:
		System::Char incomplete_byte_count; // 0x28 (size: 0x2, flags: 0x1, type: 0x3)
		System::Char incomplete_bytes; // 0x2a (size: 0x2, flags: 0x1, type: 0x3)
	}; // size = 0x30
}
