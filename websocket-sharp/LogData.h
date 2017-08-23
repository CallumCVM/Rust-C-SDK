#pragma once

#include "..\System\Diagnostics\StackFrame.h"
#include "..\System\DateTime.h"
#include "..\WebSocketSharp\LogLevel.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace WebSocketSharp
{
	class LogData : public Object // 0x0
	{
	public:
		System::Diagnostics::StackFrame* _caller; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _message; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::DateTime _date; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		WebSocketSharp::LogLevel _level; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
