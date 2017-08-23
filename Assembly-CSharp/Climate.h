#pragma once

#include "..\Climate\WeatherParameters.h"
#include "..\Climate\ClimateParameters.h"
#include "..\UnityEngine\Camera.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading.h"
#include "TOD_Scattering.h"
#include "..\UnityEngine\WindZone.h"
#include "ClimateBlendTexture.h"
#include "..\UnityEngine\Texture2D.h"

namespace rust 
{
	class Climate : public SingletonComponent`1 // 0x18
	{
	public:
		Climate::WeatherParameters* Weather; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		Climate::ClimateParameters* Arid; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		Climate::ClimateParameters* Temperate; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		Climate::ClimateParameters* Tundra; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		Climate::ClimateParameters* Arctic; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		Climate::ClimateParameters* climates; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::Camera* cam; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading* tonemappingColorGrading; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Scattering* scattering; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::WindZone* windZone; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		ClimateBlendTexture* lut; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		ClimateBlendTexture* prevLut; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* prevSrcLut1; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* prevDstLut1; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* prevSrcLut2; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::Texture2D* prevDstLut2; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		float BlendingSpeed; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float FogMultiplier; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		bool DebugLUTBlending; // 0xa0 (size: 0x1, flags: 0x6, type: 0x2)
		WeatherState state; // 0xa4 (size: 0x10, flags: 0x1, type: 0x11)
		WeatherState clamps; // 0xb4 (size: 0x10, flags: 0x1, type: 0x11)
		WeatherState Overrides; // 0xc4 (size: 0x10, flags: 0x6, type: 0x11)
		float prevLerpLut1; // 0xd4 (size: 0x4, flags: 0x1, type: 0xc)
		float prevLerpLut2; // 0xd8 (size: 0x4, flags: 0x1, type: 0xc)
		float prevLerp; // 0xdc (size: 0x4, flags: 0x1, type: 0xc)
		float cycleBlendTime; // 0xe0 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0xe8
}
