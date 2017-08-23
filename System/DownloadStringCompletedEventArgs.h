#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
	class DownloadStringCompletedEventArgs : public AsyncCompletedEventArgs // 0x28
	{
	public:
		UnityEngine::UnicodeString* result; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
