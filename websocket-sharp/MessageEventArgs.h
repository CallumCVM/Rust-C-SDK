#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Opcode.h"

namespace WebSocketSharp
{
	class MessageEventArgs : public EventArgs // 0x0
	{
	public:
		UnityEngine::UnicodeString* _data; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* _rawData; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		bool _dataSet; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Opcode _opcode; // 0x21 (size: 0x1, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
