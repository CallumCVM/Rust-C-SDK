#pragma once

#include "..\Smaa\DebugPass.h"
#include "..\Smaa\QualityPreset.h"
#include "..\Smaa\EdgeDetectionMethod.h"
#include "..\Smaa\Preset.h"
#include "..\Smaa\PredicationPreset.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\Material.h"

namespace Smaa
{
	class SMAA : public MonoBehaviour // 0x18
	{
	public:
		Smaa::Preset* CustomPreset; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Smaa::PredicationPreset* CustomPredicationPreset; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* Shader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* AreaTex; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Texture2D* SearchTex; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Camera* m_Camera; // 0x40 (size: 0x8, flags: 0x4, type: 0x12)
		Smaa::Preset* m_LowPreset; // 0x48 (size: 0x8, flags: 0x4, type: 0x12)
		Smaa::Preset* m_MediumPreset; // 0x50 (size: 0x8, flags: 0x4, type: 0x12)
		Smaa::Preset* m_HighPreset; // 0x58 (size: 0x8, flags: 0x4, type: 0x12)
		Smaa::Preset* m_UltraPreset; // 0x60 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::Material* m_Material; // 0x68 (size: 0x8, flags: 0x4, type: 0x12)
		Smaa::DebugPass DebugPass; // 0x70 (size: 0x4, flags: 0x6, type: 0x11)
		Smaa::QualityPreset Quality; // 0x74 (size: 0x4, flags: 0x6, type: 0x11)
		Smaa::EdgeDetectionMethod DetectionMethod; // 0x78 (size: 0x4, flags: 0x6, type: 0x11)
		bool UsePredication; // 0x7c (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x80
}
