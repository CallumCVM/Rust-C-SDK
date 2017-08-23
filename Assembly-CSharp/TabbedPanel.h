#pragma once

#include "..\UnityEngine\List.h"

namespace Facepunch
{
	namespace GUI
{
	class TabbedPanel : public Object // 0x0
	{
	public:
		UnityEngine::List<Facepunch.GUI.TabbedPanel.Tab>* tabs; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		int selectedTabID; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
