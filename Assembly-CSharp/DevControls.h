#pragma once

#include "..\UnityEngine\GUISkin.h"
#include "..\Facepunch\GUI\TabbedPanel.h"

namespace rust 
{
	class DevControls : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GUISkin* skin; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::GUI::TabbedPanel* tabbedPanel; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x28
}
