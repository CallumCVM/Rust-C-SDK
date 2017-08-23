#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace Networking
{
	class SyncVarAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* hook; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x18
}
