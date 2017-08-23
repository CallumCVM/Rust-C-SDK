#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	class HostData : public Object // 0x0
	{
	public:
		int m_Nat; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* m_GameType; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_GameName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int m_ConnectedPlayers; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int m_PlayerLimit; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString** m_IP; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		int m_Port; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int m_PasswordProtected; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* m_Comment; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_GUID; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
