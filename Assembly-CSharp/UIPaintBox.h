#pragma once

#include "..\UIPaintBox\OnBrushChanged.h"
#include "..\Painting\Brush.h"

namespace rust 
{
	class UIPaintBox : public MonoBehaviour // 0x18
	{
	public:
		UIPaintBox::OnBrushChanged* onBrushChanged; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Painting::Brush* brush; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
