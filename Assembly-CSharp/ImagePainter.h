#pragma once

#include "..\ImagePainter\OnDrawingEvent.h"
#include "..\UnityEngine\MonoBehaviour.h"
#include "..\Painting\Brush.h"
#include "..\ImagePainter\PointerState.h"

namespace rust 
{
	class ImagePainter : public MonoBehaviour // 0x18
	{
	public:
		ImagePainter::OnDrawingEvent* onDrawing; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::MonoBehaviour* redirectRightClick; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Painting::Brush* brush; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		ImagePainter::PointerState* pointerState; // 0x30 (size: 0x8, flags: 0x3, type: 0x1d)
		float spacingScale; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x40
}
