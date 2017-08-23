#pragma once

#include "..\UnityEngine\Vector3.h"

namespace Apex
{
	namespace DataStructures
{
	class PolygonXZ : public Object // 0x0
	{
	public:
		UnityEngine::Vector3* _points; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x18
}
