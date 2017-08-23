#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Deployer : public HeldEntity // 0x180
	{
	public:
		UnityEngine::UnicodeString* placementError; // 0x180 (size: 0x8, flags: 0x81, type: 0xe)
	}; // size = 0x188
}
