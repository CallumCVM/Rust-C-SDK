#pragma once

#include "..\UnityEngine\RectTransform.h"

namespace UnityEngine
{
	namespace UI
{
	class LayoutRebuilder : public Object // 0x0
	{
	public:
		UnityEngine::RectTransform* m_ToRebuild; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int m_CachedHashFromTransform; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
