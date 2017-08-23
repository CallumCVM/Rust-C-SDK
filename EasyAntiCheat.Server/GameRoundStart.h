#pragma once

#include "..\UnityEngine\UnicodeString*.h"

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
	class GameRoundStart : public ValueType // 0x0
	{
	public:
		UnityEngine::UnicodeString* MapName; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x18
}
