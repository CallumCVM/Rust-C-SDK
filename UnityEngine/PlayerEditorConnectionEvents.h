#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Networking\PlayerConnection\PlayerEditorConnectionEvents\ConnectionChangeEvent.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace PlayerConnection
{
	class PlayerEditorConnectionEvents : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents.MessageTypeSubscribers>* messageTypeSubscribers; // 0x10 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* connectionEvent; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::ConnectionChangeEvent* disconnectionEvent; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
