#pragma once

#include "..\System\IO\TextWriter.h"

namespace System
{
	namespace Diagnostics
{
	class TextWriterTraceListener : public TraceListener // 0x40
	{
	public:
		System::IO::TextWriter* writer; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
