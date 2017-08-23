#pragma once

#include "..\UnityEngine\Networking\PlayerConnection\PlayerEditorConnectionEvents.h"
#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace PlayerConnection
{
	class PlayerConnection : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents* m_PlayerEditorConnectionEvents; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<int>* m_connectedPlayers; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		bool m_IsInitilized; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
