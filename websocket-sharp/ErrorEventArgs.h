#pragma once

#include "..\System\Exception.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	class ErrorEventArgs : public EventArgs // 0x0
	{
	public:
		System::Exception* _exception; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _message; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
