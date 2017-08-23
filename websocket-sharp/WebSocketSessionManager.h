#pragma once

#include "..\System\Object.h"
#include "..\WebSocketSharp\Logger.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Server\ServerState.h"
#include "..\System\Timers\Timer.h"
#include "..\System\TimeSpan.h"

namespace WebSocketSharp
{
	namespace Server
{
	class WebSocketSessionManager : public Object // 0x0
	{
	public:
		System::Object _forSweep; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		WebSocketSharp::Logger* _logger; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,WebSocketSharp.Server.IWebSocketSession> _sessions; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Timers::Timer* _sweepTimer; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _sync; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		bool _clean; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Server::ServerState _state; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
		bool _sweeping; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		System::TimeSpan _waitTime; // 0x48 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
