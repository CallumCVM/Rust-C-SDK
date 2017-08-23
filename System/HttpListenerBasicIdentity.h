#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
	class HttpListenerBasicIdentity : public GenericIdentity // 0x20
	{
	public:
		UnityEngine::UnicodeString* password; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
