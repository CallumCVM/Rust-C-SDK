#pragma once

#include "..\System\Func<TBehavior>.h"
#include "..\WebSocketSharp\Logger.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Server\WebSocketSessionManager.h"

namespace WebSocketSharp
{
	namespace Server
{
		template <typename T0>
	class WebSocketServiceHost : public WebSocketServiceHost // 0x0
	{
	public:
		System::Func<TBehavior> _initializer; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		WebSocketSharp::Logger* _logger; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _path; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		WebSocketSharp::Server::WebSocketSessionManager* _sessions; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
