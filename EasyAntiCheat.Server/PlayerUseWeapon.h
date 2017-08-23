#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\EasyAntiCheat\Server\Legacy\Cerberus\Vector3.h"

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
	class PlayerUseWeapon : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* PlayerGUID; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		EasyAntiCheat::Server::Legacy::Cerberus::Vector3 PlayerPosition; // 0x18 (size: 0xc, flags: 0x6, type: 0x11)
		EasyAntiCheat::Server::Legacy::Cerberus::Vector3 PlayerViewAngles; // 0x24 (size: 0xc, flags: 0x6, type: 0x11)
		int WeaponID; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x38
}
