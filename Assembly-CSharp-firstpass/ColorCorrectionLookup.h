#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Texture3D.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ColorCorrectionLookup : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Shader* shader; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* material; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture3D* converted3DLut; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* basedOnTempTex; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x40
}
