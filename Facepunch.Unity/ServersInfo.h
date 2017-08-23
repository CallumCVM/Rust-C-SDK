#pragma once

#include "..\Facepunch\Models\Manifest\ServerDesc.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class ServersInfo : public Object // 0x0
	{
	public:
		Facepunch::Models::Manifest::ServerDesc* Official; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString** Banned; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x20
}
