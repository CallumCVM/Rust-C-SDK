#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\WebSocketSharp\Server\WebSocketServer.h"

namespace Facepunch
{
	namespace Rcon
{
	class Listener : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Password; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Address; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* SslCertificate; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* SslCertificatePassword; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		System.Action<System.Net.IPEndPoint,UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> OnMessage; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		WebSocketSharp::Server::WebSocketServer* server; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		int Port; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x48
}
