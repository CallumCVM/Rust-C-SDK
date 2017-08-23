#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Logger.h"
#include "..\WebSocketSharp\Server\ServerState.h"
#include "..\System\Object.h"
#include "..\System\TimeSpan.h"

namespace WebSocketSharp
{
	namespace Server
{
	class WebSocketServiceManager : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,WebSocketSharp.Server.WebSocketServiceHost> _hosts; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		WebSocketSharp::Logger* _logger; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _sync; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
		bool _clean; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Server::ServerState _state; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		System::TimeSpan _waitTime; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
