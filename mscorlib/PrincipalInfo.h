#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class PrincipalInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _role; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		bool _isAuthenticated; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
