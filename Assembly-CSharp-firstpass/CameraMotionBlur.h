#pragma once

#include "..\UnityStandardAssets\ImageEffects\CameraMotionBlur\MotionBlurFilter.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\LayerMask.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Camera.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class CameraMotionBlur : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::GameObject* tmpCam; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* shader; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* dx11MotionBlurShader; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Shader* replacementClear; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* motionBlurMaterial; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* dx11MotionBlurMaterial; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* noiseTexture; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Camera* _camera; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::CameraMotionBlur::MotionBlurFilter filterType; // 0x60 (size: 0x4, flags: 0x6, type: 0x11)
		bool preview; // 0x64 (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 previewScale; // 0x68 (size: 0xc, flags: 0x6, type: 0x11)
		float movementScale; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float rotationScale; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		float maxVelocity; // 0x7c (size: 0x4, flags: 0x6, type: 0xc)
		float minVelocity; // 0x80 (size: 0x4, flags: 0x6, type: 0xc)
		float velocityScale; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		float softZDistance; // 0x88 (size: 0x4, flags: 0x6, type: 0xc)
		int velocityDownsample; // 0x8c (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::LayerMask excludeLayers; // 0x90 (size: 0x4, flags: 0x6, type: 0x11)
		float jitter; // 0x94 (size: 0x4, flags: 0x6, type: 0xc)
		bool showVelocity; // 0x98 (size: 0x1, flags: 0x6, type: 0x2)
		float showVelocityScale; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Matrix4x4 currentViewProjMat; // 0xa0 (size: 0x40, flags: 0x1, type: 0x11)
		UnityEngine::Matrix4x4 prevViewProjMat; // 0xe0 (size: 0x40, flags: 0x1, type: 0x11)
		int prevFrameCount; // 0x120 (size: 0x4, flags: 0x1, type: 0x8)
		bool wasActive; // 0x124 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::Vector3 prevFrameForward; // 0x128 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 prevFrameUp; // 0x134 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 prevFramePos; // 0x140 (size: 0xc, flags: 0x1, type: 0x11)
	}; // size = 0x150
}
