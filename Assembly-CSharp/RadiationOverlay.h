#pragma once

#include "SoundDefinition.h"
#include "Sound.h"
#include "..\UnityStandardAssets\ImageEffects\ColorCorrectionCurves.h"
#include "..\UnityStandardAssets\ImageEffects\NoiseAndGrain.h"

namespace rust 
{
	class RadiationOverlay : public ImageEffectLayer // 0x28
	{
	public:
		SoundDefinition* geigerSounds; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		Sound* sound; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::ColorCorrectionCurves* colourCorrection; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::ImageEffects::NoiseAndGrain* noiseAndGrain; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		float smoothRadiationCurrent; // 0x48 (size: 0x4, flags: 0x1, type: 0xc)
		float smoothRadiationVelocity; // 0x4c (size: 0x4, flags: 0x1, type: 0xc)
		float smoothRadiationExposureCurrent; // 0x50 (size: 0x4, flags: 0x1, type: 0xc)
		float smoothRadiationExposureVelocity; // 0x54 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x58
}
