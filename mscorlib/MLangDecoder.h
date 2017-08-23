#pragma once

#include "..\System\Text\Encoding.h"
#include "..\System\Text\Decoder.h"

namespace rust 
{
	class MLangDecoder : public Object // 0x0
	{
	public:
		System::Text::Encoding* encoding; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Decoder* realObject; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
