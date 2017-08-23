#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
	class DecoderReplacementFallbackBuffer : public DecoderFallbackBuffer // 0x0
	{
	public:
		bool fallback_assigned; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		int current; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* replacement; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
