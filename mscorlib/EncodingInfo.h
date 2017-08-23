#pragma once

#include "..\System\Text\Encoding.h"

namespace System
{
	namespace Text
{
	class EncodingInfo : public Object // 0x0
	{
	public:
		int codepage; // 0x10 (size: 0x4, flags: 0x21, type: 0x8)
		System::Text::Encoding* encoding; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
