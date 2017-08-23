#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Text
{
	class EncoderReplacementFallbackBuffer : public EncoderFallbackBuffer // 0x0
	{
	public:
		UnityEngine::UnicodeString* replacement; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		int current; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		bool fallback_assigned; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
