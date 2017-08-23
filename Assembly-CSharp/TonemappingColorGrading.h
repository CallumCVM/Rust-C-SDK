#pragma once

#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\EyeAdaptationSettings.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\TonemappingSettings.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\ColorGradingSettings.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\LUTSettings.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\RenderTextureFormat.h"

namespace UnityStandardAssets
{
	namespace CinematicEffects
{
	class TonemappingColorGrading : public MonoBehaviour // 0x18
	{
	public:
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::TonemappingSettings m_Tonemapping; // 0x18 (size: 0x30, flags: 0x1, type: 0x11)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::ColorGradingSettings m_ColorGrading; // 0x48 (size: 0x98, flags: 0x1, type: 0x11)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::LUTSettings m_Lut; // 0xe0 (size: 0x18, flags: 0x1, type: 0x11)
		UnityEngine::Texture2D* m_IdentityLut; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* m_InternalLut; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* m_CurveTexture; // 0x108 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* m_TonemapperCurve; // 0x110 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* m_Shader; // 0x118 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_Material; // 0x120 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* m_SmallAdaptiveRt; // 0x128 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::RenderTexture* rts; // 0x130 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::EyeAdaptationSettings m_EyeAdaptation; // 0x138 (size: 0x18, flags: 0x1, type: 0x11)
		float m_TonemapperCurveRange; // 0x150 (size: 0x4, flags: 0x1, type: 0xc)
		bool <validRenderTextureFormat>k__BackingField; // 0x154 (size: 0x1, flags: 0x1, type: 0x2)
		bool <validUserLutSize>k__BackingField; // 0x155 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_Dirty; // 0x156 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_TonemapperDirty; // 0x157 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::RenderTextureFormat m_AdaptiveRtFormat; // 0x158 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x160
}
