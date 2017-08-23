#pragma once

#include "..\System\IO\TextReader.h"

namespace System
{
	namespace IO
{
	class SynchronizedReader : public TextReader // 0x18
	{
	public:
		System::IO::TextReader* reader; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
