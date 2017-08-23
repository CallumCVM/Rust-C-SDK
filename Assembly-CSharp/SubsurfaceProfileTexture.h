#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class SubsurfaceProfileTexture : public Object // 0x0
	{
	public:
		UnityEngine::List<SubsurfaceProfileTexture.SubsurfaceProfileEntry>* entries; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Texture2D* texture; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
