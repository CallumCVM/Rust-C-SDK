#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\SkinSet\MeshReplace.h"
#include "..\SkinSet\MaterialReplace.h"
#include "..\UnityEngine\Gradient.h"

namespace rust 
{
	class SkinSet : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::UnicodeString* Label; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		SkinSet::MeshReplace* MeshReplacements; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		SkinSet::MaterialReplace* MaterialReplacements; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Gradient* SkinColour; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x38
}
