#pragma once

#include "..\System\TermInfoDriver.h"

namespace System
{
	namespace IO
{
	class CStreamWriter : public StreamWriter // 0x60
	{
	public:
		System::TermInfoDriver* driver; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x68
}
