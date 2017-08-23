#pragma once

#include "..\UnityEngine\Color.h"

namespace Facepunch
{
	namespace Extend
{
	class TextureSampler : public Object // 0x0
	{
	public:
		UnityEngine::Color* _data; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int _height; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int _width; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
