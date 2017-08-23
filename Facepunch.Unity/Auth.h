#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace Facepunch
{
	namespace Models
{
	class Auth : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* Type; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Id; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Ticket; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x28
}
