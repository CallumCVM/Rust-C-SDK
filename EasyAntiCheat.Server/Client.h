#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\EasyAntiCheat\Server\Legacy\Protocol\UserToken.h"

namespace EasyAntiCheat
{
	namespace Server
{
{
		namespace Legacy
{
	class Client : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* <OwnerGuid>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <PlayerGuid>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		EasyAntiCheat::Server::Legacy::Protocol::UserToken* <Token>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
