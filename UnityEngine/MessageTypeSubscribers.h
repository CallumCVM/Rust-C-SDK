#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Networking\PlayerConnection\PlayerEditorConnectionEvents\MessageEvent.h"

namespace rust 
{
	class MessageTypeSubscribers : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_messageTypeId; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents::MessageEvent* messageCallback; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		int subscriberCount; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
