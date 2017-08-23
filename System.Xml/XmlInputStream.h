#pragma once

#include "..\System\Text\Encoding.h"
#include "..\System\IO\Stream.h"

namespace System
{
	namespace Xml
{
	class XmlInputStream : public Stream // 0x18
	{
	public:
		System::Text::Encoding* enc; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Stream* stream; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* buffer; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		int bufLength; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int bufPos; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
