#pragma once

#include "..\EasyAntiCheat\Server\Scout\Scout.h"
#include "..\EasyAntiCheat\Server\ClientAuth\ClientAuth.h"
#include "..\EasyAntiCheat\Server\Legacy\Cerberus\PlayerTracker.h"

namespace EasyAntiCheat
{
	namespace Server
{
{
		namespace Legacy
{
	class EasyAntiCheatServer : public Object // 0x0
	{
	public:
		EasyAntiCheat::Server::Scout::Scout* _Scout; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		EasyAntiCheat::Server::ClientAuth::ClientAuth* _ClientAuth; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		EasyAntiCheat::Server::Legacy::Cerberus::PlayerTracker* _Cerberus; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x28
}
