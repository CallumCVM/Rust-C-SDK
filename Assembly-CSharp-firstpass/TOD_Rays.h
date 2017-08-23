#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\TOD_ImageEffect\ResolutionType.h"
#include "..\UnityEngine\Material.h"

namespace rust 
{
	class TOD_Rays : public TOD_ImageEffect // 0x28
	{
	public:
		UnityEngine::Shader* GodRayShader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* ScreenClearShader; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* SkyMaskShader; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* godRayMaterial; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* screenClearMaterial; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* skyMaskMaterial; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		bool UseDepthTexture; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		BlendModeType BlendMode; // 0x5c (size: 0x4, flags: 0x6, type: 0x11)
		float Intensity; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		TOD_ImageEffect::ResolutionType Resolution; // 0x64 (size: 0x4, flags: 0x6, type: 0x11)
		int BlurIterations; // 0x68 (size: 0x4, flags: 0x6, type: 0x8)
		float BlurRadius; // 0x6c (size: 0x4, flags: 0x6, type: 0xc)
		float MaxRadius; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x78
}
