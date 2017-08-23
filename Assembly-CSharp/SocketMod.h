#pragma once

#include "Socket_Base.h"
#include "..\Translate\Phrase.h"

namespace rust 
{
	class SocketMod : public PrefabAttribute // 0x98
	{
	public:
		Socket_Base* baseSocket; // 0x98 (size: 0x8, flags: 0x86, type: 0x12)
		Translate::Phrase* FailedPhrase; // 0xa0 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0xa8
}
