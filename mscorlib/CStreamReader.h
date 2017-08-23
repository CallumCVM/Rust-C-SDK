#pragma once

#include "..\System\TermInfoDriver.h"

namespace System
{
	namespace IO
{
	class CStreamReader : public StreamReader // 0x68
	{
	public:
		System::TermInfoDriver* driver; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x70
}
