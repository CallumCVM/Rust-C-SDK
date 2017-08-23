#pragma once

#include "..\UnityEngine\UI\Text.h"
#include "ServerBrowserList.h"

namespace rust 
{
	class ServerBrowserCategory : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UI::Text* serverCountText; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		ServerBrowserList* browserList; // 0x20 (size: 0x8, flags: 0x86, type: 0x12)
		bool isDirty; // 0x28 (size: 0x1, flags: 0x86, type: 0x2)
	}; // size = 0x30
}
