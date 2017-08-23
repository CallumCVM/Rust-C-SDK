#pragma once

#include "..\System\IO\TextWriter.h"

namespace System
{
	namespace IO
{
	class SynchronizedWriter : public TextWriter // 0x28
	{
	public:
		System::IO::TextWriter* writer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		bool neverClose; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
