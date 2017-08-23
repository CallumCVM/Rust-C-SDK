#pragma once

#include "MonumentType.h"
#include "..\Translate\Phrase.h"

namespace rust 
{
	class MonumentInfo : public MonoBehaviour // 0x18
	{
	public:
		Translate::Phrase* displayPhrase; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		MonumentType Type; // 0x20 (size: 0x4, flags: 0x6, type: 0x11)
		bool shouldDisplayOnMap; // 0x24 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x28
}
