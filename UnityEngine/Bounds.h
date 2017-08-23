#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	class Bounds : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3 m_Center; // 0x10 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 m_Extents; // 0x1c (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
