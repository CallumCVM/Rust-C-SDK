#pragma once

#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\RenderTextureFormat.h"
#include "..\UnityEngine\RenderTexture.h"
#include "..\UnityEngine\Rendering\RenderTargetIdentifier.h"
#include "..\UnityEngine\Mesh.h"
#include "..\System\Collections\Generic\Dictionary<UnityEngine\Rendering\CameraEvent,UnityEngine\Rendering\CommandBuffer>.h"

namespace rust 
{
	class AmplifyOcclusionBase : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* m_camera; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_occlusionMat; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_blurMat; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* m_copyMat; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* m_randomTex; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Color* m_randomData; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_layerOffsetNames; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_layerRandomNames; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_layerDepthNames; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_layerNormalNames; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString** m_layerOcclusionNames; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::RenderTexture* m_occlusionRT; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		int* m_depthLayerRT; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		int* m_normalLayerRT; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
		int* m_occlusionLayerRT; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Rendering::RenderTargetIdentifier* m_depthTargets; // 0x90 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Rendering::RenderTargetIdentifier* m_normalTargets; // 0x98 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Rendering::RenderTargetIdentifier* m_applyDeferredTargets; // 0xa0 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Mesh* m_blitMesh; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::Dictionary<UnityEngine::Rendering::CameraEvent,UnityEngine::Rendering::CommandBuffer> m_registeredCommandBuffers; // 0xb0 (size: 0x8, flags: 0x1, type: 0x15)
		ApplicationMethod ApplyMethod; // 0xb8 (size: 0x4, flags: 0x6, type: 0x11)
		SampleCountLevel SampleCount; // 0xbc (size: 0x4, flags: 0x6, type: 0x11)
		PerPixelNormalSource PerPixelNormals; // 0xc0 (size: 0x4, flags: 0x6, type: 0x11)
		float Intensity; // 0xc4 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Color Tint; // 0xc8 (size: 0x10, flags: 0x6, type: 0x11)
		float Radius; // 0xd8 (size: 0x4, flags: 0x6, type: 0xc)
		float PowerExponent; // 0xdc (size: 0x4, flags: 0x6, type: 0xc)
		float Bias; // 0xe0 (size: 0x4, flags: 0x6, type: 0xc)
		bool CacheAware; // 0xe4 (size: 0x1, flags: 0x6, type: 0x2)
		bool Downsample; // 0xe5 (size: 0x1, flags: 0x6, type: 0x2)
		bool FadeEnabled; // 0xe6 (size: 0x1, flags: 0x6, type: 0x2)
		float FadeStart; // 0xe8 (size: 0x4, flags: 0x6, type: 0xc)
		float FadeLength; // 0xec (size: 0x4, flags: 0x6, type: 0xc)
		float FadeToIntensity; // 0xf0 (size: 0x4, flags: 0x6, type: 0xc)
		float FadeToRadius; // 0xf4 (size: 0x4, flags: 0x6, type: 0xc)
		float FadeToPowerExponent; // 0xf8 (size: 0x4, flags: 0x6, type: 0xc)
		bool BlurEnabled; // 0xfc (size: 0x1, flags: 0x6, type: 0x2)
		int BlurRadius; // 0x100 (size: 0x4, flags: 0x6, type: 0x8)
		int BlurPasses; // 0x104 (size: 0x4, flags: 0x6, type: 0x8)
		float BlurSharpness; // 0x108 (size: 0x4, flags: 0x6, type: 0xc)
		int prevScreenWidth; // 0x10c (size: 0x4, flags: 0x1, type: 0x8)
		int prevScreenHeight; // 0x110 (size: 0x4, flags: 0x1, type: 0x8)
		bool prevHDR; // 0x114 (size: 0x1, flags: 0x1, type: 0x2)
		ApplicationMethod prevApplyMethod; // 0x118 (size: 0x4, flags: 0x1, type: 0x11)
		SampleCountLevel prevSampleCount; // 0x11c (size: 0x4, flags: 0x1, type: 0x11)
		PerPixelNormalSource prevPerPixelNormals; // 0x120 (size: 0x4, flags: 0x1, type: 0x11)
		bool prevCacheAware; // 0x124 (size: 0x1, flags: 0x1, type: 0x2)
		bool prevDownscale; // 0x125 (size: 0x1, flags: 0x1, type: 0x2)
		bool prevFadeEnabled; // 0x126 (size: 0x1, flags: 0x1, type: 0x2)
		float prevFadeToIntensity; // 0x128 (size: 0x4, flags: 0x1, type: 0xc)
		float prevFadeToRadius; // 0x12c (size: 0x4, flags: 0x1, type: 0xc)
		float prevFadeToPowerExponent; // 0x130 (size: 0x4, flags: 0x1, type: 0xc)
		float prevFadeStart; // 0x134 (size: 0x4, flags: 0x1, type: 0xc)
		float prevFadeLength; // 0x138 (size: 0x4, flags: 0x1, type: 0xc)
		bool prevBlurEnabled; // 0x13c (size: 0x1, flags: 0x1, type: 0x2)
		int prevBlurRadius; // 0x140 (size: 0x4, flags: 0x1, type: 0x8)
		int prevBlurPasses; // 0x144 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::RenderTextureFormat m_depthRTFormat; // 0x148 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::RenderTextureFormat m_normalRTFormat; // 0x14c (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::RenderTextureFormat m_occlusionRTFormat; // 0x150 (size: 0x4, flags: 0x1, type: 0x11)
		int m_mrtCount; // 0x154 (size: 0x4, flags: 0x1, type: 0x8)
		int m_deinterleaveDepthPass; // 0x158 (size: 0x4, flags: 0x1, type: 0x8)
		int m_deinterleaveNormalPass; // 0x15c (size: 0x4, flags: 0x1, type: 0x8)
		TargetDesc m_target; // 0x160 (size: 0x20, flags: 0x1, type: 0x11)
	}; // size = 0x180
}
