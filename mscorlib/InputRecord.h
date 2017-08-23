#pragma once

#include "..\System\Int16.h"
#include "..\System\Char.h"

namespace System
{
	class InputRecord : public ValueType // 0x0
	{
	public:
		System::Int16 EventType; // 0x10 (size: 0x2, flags: 0x6, type: 0x6)
		bool KeyDown; // 0x12 (size: 0x1, flags: 0x6, type: 0x2)
		System::Int16 RepeatCount; // 0x14 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 VirtualKeyCode; // 0x16 (size: 0x2, flags: 0x6, type: 0x6)
		System::Int16 VirtualScanCode; // 0x18 (size: 0x2, flags: 0x6, type: 0x6)
		System::Char Character; // 0x1a (size: 0x2, flags: 0x6, type: 0x3)
		int ControlKeyState; // 0x1c (size: 0x4, flags: 0x6, type: 0x8)
		int pad1; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool pad2; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
