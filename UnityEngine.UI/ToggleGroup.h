#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace UI
{
	class ToggleGroup : public UIBehaviour // 0x18
	{
	public:
		UnityEngine::List<UnityEngine.UI.Toggle>* m_Toggles; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		bool m_AllowSwitchOff; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
