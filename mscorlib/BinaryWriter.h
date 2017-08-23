#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\Text\Encoding.h"

namespace System
{
	namespace IO
{
	class BinaryWriter : public Object // 0x0
	{
	public:
		System::IO::Stream* OutStream; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Text::Encoding* m_encoding; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* buffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool disposed; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* stringBuffer; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		int maxCharsPerRound; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
