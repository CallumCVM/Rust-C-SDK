#pragma once

#include "..\UnityEngine\Material.h"

namespace rust 
{
	class WorkshopSkinBase : public WorkshopBase // 0x38
	{
	public:
		UnityEngine::Material* skinMaterial0; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* skinMaterial1; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* skinMaterial2; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* skinMaterial3; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		SkinType skinType; // 0x58 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x60
}
