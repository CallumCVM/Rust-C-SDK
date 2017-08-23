#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\LogLevel.h"
#include "..\System\Object.h"

namespace WebSocketSharp
{
	class Logger : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _file; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System.Action<WebSocketSharp.LogData,UnityEngine::UnicodeString*> _output; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object _sync; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		WebSocketSharp::LogLevel _level; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
