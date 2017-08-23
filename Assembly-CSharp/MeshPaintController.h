#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\UI\RawImage.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class MeshPaintController : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* pickerCamera; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* brushTexture; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::RawImage* brushImage; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<MeshPaintable>* dirtyPaintables; // 0x30 (size: 0x8, flags: 0x3, type: 0x15)
		UnityEngine::Vector2 brushScale; // 0x38 (size: 0x8, flags: 0x6, type: 0x11)
		UnityEngine::Color brushColor; // 0x40 (size: 0x10, flags: 0x6, type: 0x11)
		float brushSpacing; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 lastPosition; // 0x54 (size: 0xc, flags: 0x1, type: 0x11)
		bool drawingBlocked; // 0x60 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x68
}
