#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\EasyAntiCheat\Server\Legacy\Cerberus\Vector3.h"
#include "..\EasyAntiCheat\Server\Legacy\Cerberus\PlayerTakeDamageFlags.h"

namespace EasyAntiCheat
{
	namespace Server
{
{
		namespace Legacy
{
{
{
			namespace Cerberus
{
	class PlayerTakeDamage : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* VictimPlayerGUID; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		EasyAntiCheat::Server::Legacy::Cerberus::Vector3 VictimPlayerPosition; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		EasyAntiCheat::Server::Legacy::Cerberus::Vector3 VictimPlayerViewAngles; // 0x24 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* AttackerPlayerGUID; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		EasyAntiCheat::Server::Legacy::Cerberus::Vector3 AttackerPlayerPosition; // 0x38 (size: 0xc, flags: 0x6, type: 0x11)
		EasyAntiCheat::Server::Legacy::Cerberus::Vector3 AttackerPlayerViewAngles; // 0x44 (size: 0xc, flags: 0x6, type: 0x11)
		int WeaponID; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
		int HitBoneID; // 0x54 (size: 0x4, flags: 0x6, type: 0x8)
		EasyAntiCheat::Server::Legacy::Cerberus::PlayerTakeDamageFlags Flags; // 0x58 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x60
}
