#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Resources\UltimateResourceFallbackLocation.h"

namespace System
{
	namespace Resources
{
	class NeutralResourcesLanguageAttribute : public Attribute // 0x0
	{
	public:
		UnityEngine::UnicodeString* culture; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Resources::UltimateResourceFallbackLocation loc; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
