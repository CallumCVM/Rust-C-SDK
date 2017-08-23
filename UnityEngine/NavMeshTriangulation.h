#pragma once

#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace AI
{
	class NavMeshTriangulation : public ValueType // 0x0
	{
	public:
		UnityEngine::Vector3* vertices; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		int* indices; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		int* areas; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
