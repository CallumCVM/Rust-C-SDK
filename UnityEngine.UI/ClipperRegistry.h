#pragma once

#include "..\UnityEngine\UI\Collections\IndexedSet<UnityEngine\UI\IClipper>.h"

namespace UnityEngine
{
	namespace UI
{
	class ClipperRegistry : public Object // 0x0
	{
	public:
		UnityEngine::UI::Collections::IndexedSet<UnityEngine::UI::IClipper> m_Clippers; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
	}; // size = 0x18
}
