#pragma once

#include "..\Kino\Motion\ExposureMode.h"
#include "..\Kino\Motion\SampleCount.h"
#include "..\Kino\Motion\DebugMode.h"
#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace Kino
{
	class Motion : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Shader* _prefilterShader; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Shader* _reconstructionShader; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* _prefilterMaterial; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Material* _reconstructionMaterial; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Kino::Motion::ExposureMode _exposureMode; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		int _shutterSpeed; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		float _exposureTimeScale; // 0x40 (size: 0x4, flags: 0x1, type: 0xc)
		Kino::Motion::SampleCount _sampleCount; // 0x44 (size: 0x4, flags: 0x1, type: 0x11)
		int _sampleCountValue; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		float _maxBlurRadius; // 0x4c (size: 0x4, flags: 0x1, type: 0xc)
		Kino::Motion::DebugMode _debugMode; // 0x50 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
