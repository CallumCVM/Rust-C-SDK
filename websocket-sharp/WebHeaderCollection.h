#pragma once

#include "..\WebSocketSharp\Net\HttpHeaderType.h"

namespace WebSocketSharp
{
	namespace Net
{
	class WebHeaderCollection : public NameValueCollection // 0x68
	{
	public:
		bool _internallyUsed; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Net::HttpHeaderType _state; // 0x6c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
