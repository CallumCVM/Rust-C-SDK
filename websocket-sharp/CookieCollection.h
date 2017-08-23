#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Object.h"

namespace WebSocketSharp
{
	namespace Net
{
	class CookieCollection : public Object // 0x0
	{
	public:
		UnityEngine::List<WebSocketSharp.Net.Cookie>* _list; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		System::Object _sync; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x20
}
