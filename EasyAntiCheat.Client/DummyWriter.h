#pragma once

#include "..\EasyAntiCheat\Client\Debug\WriterDelegate.h"

namespace rust 
{
	class DummyWriter : public TextWriter // 0x28
	{
	public:
		EasyAntiCheat::Client::Debug::WriterDelegate* writer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
