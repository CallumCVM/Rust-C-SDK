#pragma once

#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	namespace UI
{
	class Shadow : public BaseMeshEffect // 0x20
	{
	public:
		UnityEngine::Color m_EffectColor; // 0x20 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Vector2 m_EffectDistance; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
		bool m_UseGraphicAlpha; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
