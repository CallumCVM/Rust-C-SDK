#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class CommentComponent : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* comment; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
