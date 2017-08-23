#pragma once

#include "..\System\Nullable<System\DateTime>.h"
#include "..\EasyAntiCheat\Server\Legacy\Client.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\EasyAntiCheat\Server\ClientStatus.h"

namespace EasyAntiCheat
{
	namespace Server
{
{
		namespace Legacy
{
	class ClientStatusUpdate : public Object // 0x0
	{
	public:
		EasyAntiCheat::Server::Legacy::Client <Client>k__BackingField; // 0x10 (size: 0x18, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* <Message>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Nullable<System::DateTime> timeBanExpires; // 0x30 (size: 0x18, flags: 0x1, type: 0x15)
		EasyAntiCheat::Server::ClientStatus <Status>k__BackingField; // 0x48 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
