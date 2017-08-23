#pragma once

#include "..\System\UInt16.h"
#include "..\WebSocketSharp\PayloadData.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	class CloseEventArgs : public EventArgs // 0x0
	{
	public:
		WebSocketSharp::PayloadData* _payloadData; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _reason; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool _clean; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		System::UInt16 _code; // 0x22 (size: 0x2, flags: 0x1, type: 0x7)
	}; // size = 0x28
}
