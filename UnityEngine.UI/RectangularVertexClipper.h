#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace UI
{
	class RectangularVertexClipper : public Object // 0x0
	{
	public:
		UnityEngine::Vector3* m_WorldCorners; // 0x10 (size: 0x8, flags: 0x21, type: 0x1d)
		UnityEngine::Vector3* m_CanvasCorners; // 0x18 (size: 0x8, flags: 0x21, type: 0x1d)
	}; // size = 0x20
}
