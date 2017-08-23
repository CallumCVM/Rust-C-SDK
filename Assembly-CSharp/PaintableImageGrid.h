#pragma once

#include "UIPaintableImage.h"
#include "UIPaintableImage[,].h"

namespace rust 
{
	class PaintableImageGrid : public UIBehaviour // 0x18
	{
	public:
		UIPaintableImage* templateImage; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UIPaintableImage[,] images; // 0x20 (size: 0x8, flags: 0x3, type: 0x14)
		int cols; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int rows; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x30
}
