#pragma once

#include "..\System\Text\Encoding.h"

namespace rust 
{
	class ForwardingDecoder : public Decoder // 0x20
	{
	public:
		System::Text::Encoding* encoding; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
