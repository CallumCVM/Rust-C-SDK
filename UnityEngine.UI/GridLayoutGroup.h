#pragma once

#include "..\UnityEngine\UI\GridLayoutGroup\Corner.h"
#include "..\UnityEngine\UI\GridLayoutGroup\Axis.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\UI\GridLayoutGroup\Constraint.h"

namespace UnityEngine
{
	namespace UI
{
	class GridLayoutGroup : public LayoutGroup // 0x50
	{
	public:
		UnityEngine::UI::GridLayoutGroup::Corner m_StartCorner; // 0x50 (size: 0x4, flags: 0x4, type: 0x11)
		UnityEngine::UI::GridLayoutGroup::Axis m_StartAxis; // 0x54 (size: 0x4, flags: 0x4, type: 0x11)
		UnityEngine::Vector2 m_CellSize; // 0x58 (size: 0x8, flags: 0x4, type: 0x11)
		UnityEngine::Vector2 m_Spacing; // 0x60 (size: 0x8, flags: 0x4, type: 0x11)
		UnityEngine::UI::GridLayoutGroup::Constraint m_Constraint; // 0x68 (size: 0x4, flags: 0x4, type: 0x11)
		int m_ConstraintCount; // 0x6c (size: 0x4, flags: 0x4, type: 0x8)
	}; // size = 0x70
}
