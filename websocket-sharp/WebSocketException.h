#pragma once

#include "..\WebSocketSharp\CloseStatusCode.h"

namespace WebSocketSharp
{
	class WebSocketException : public Exception // 0x60
	{
	public:
		WebSocketSharp::CloseStatusCode _code; // 0x60 (size: 0x2, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
