#pragma once

#include "..\System\Text\Encoding.h"
#include "..\System\Text\Encoder.h"

namespace System
{
	namespace Text
{
	class SurrogateEncoder : public Object // 0x0
	{
	public:
		System::Text::Encoding* encoding; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::Encoder* realObject; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
