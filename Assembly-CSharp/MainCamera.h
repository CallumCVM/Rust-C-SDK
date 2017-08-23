#pragma once

#include "..\UnityStandardAssets\ImageEffects\DepthOfField.h"
#include "AmplifyOcclusionEffect.h"
#include "..\Kino\Motion.h"
#include "TOD_Rays.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading.h"
#include "FXAA.h"
#include "..\Smaa\SMAA.h"
#include "..\TAA\TemporalAntiAliasing.h"
#include "CC_SharpenAndVignette.h"
#include "SEScreenSpaceShadows.h"
#include "VisualizeTexelDensity.h"
#include "EnvironmentType.h"

namespace rust 
{
	class MainCamera : public SingletonComponent`1 // 0x18
	{
	public:
		UnityStandardAssets::ImageEffects::DepthOfField* dof; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		AmplifyOcclusionEffect* ssao; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Kino::Motion* motionBlur; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_Rays* shafts; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading* tonemappingColorGrading; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		FXAA* fxaa; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		Smaa::SMAA* smaa; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		TAA::TemporalAntiAliasing* taa; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		CC_SharpenAndVignette* sharpenAndVignette; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		SEScreenSpaceShadows* contactShadows; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		VisualizeTexelDensity* visualizeTexelDensity; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		float ambientLightDay; // 0x70 (size: 0x4, flags: 0x1, type: 0xc)
		float ambientLightNight; // 0x74 (size: 0x4, flags: 0x1, type: 0xc)
		float ambientLightMultiplier; // 0x78 (size: 0x4, flags: 0x1, type: 0xc)
		float ambientLightMultiplierTarget; // 0x7c (size: 0x4, flags: 0x1, type: 0xc)
		float skyReflectionDay; // 0x80 (size: 0x4, flags: 0x1, type: 0xc)
		float skyReflectionNight; // 0x84 (size: 0x4, flags: 0x1, type: 0xc)
		float skyReflectionMultiplier; // 0x88 (size: 0x4, flags: 0x1, type: 0xc)
		float skyReflectionMultiplierTarget; // 0x8c (size: 0x4, flags: 0x1, type: 0xc)
		float environmentTimestamp; // 0x90 (size: 0x4, flags: 0x1, type: 0xc)
		EnvironmentType environmentType; // 0x94 (size: 0x4, flags: 0x1, type: 0x11)
		bool waterVisible; // 0x98 (size: 0x1, flags: 0x1, type: 0x2)
		int screenWidth; // 0x9c (size: 0x4, flags: 0x1, type: 0x8)
		int screenHeight; // 0xa0 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0xa8
}
