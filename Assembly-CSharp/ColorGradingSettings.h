#pragma once

#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\ColorGradingPrecision.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\ColorWheelsSettings.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\BasicsSettings.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\ChannelMixerSettings.h"
#include "..\UnityStandardAssets\CinematicEffects\TonemappingColorGrading\CurvesSettings.h"

namespace rust 
{
	class ColorGradingSettings : public ValueType // 0x0
	{
	public:
		bool enabled; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::ColorGradingPrecision precision; // 0x14 (size: 0x4, flags: 0x6, type: 0x11)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::ColorWheelsSettings colorWheels; // 0x18 (size: 0x30, flags: 0x6, type: 0x11)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::BasicsSettings basics; // 0x48 (size: 0x24, flags: 0x6, type: 0x11)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::ChannelMixerSettings channelMixer; // 0x70 (size: 0x10, flags: 0x6, type: 0x11)
		UnityStandardAssets::CinematicEffects::TonemappingColorGrading::CurvesSettings curves; // 0x80 (size: 0x20, flags: 0x6, type: 0x11)
		bool useDithering; // 0xa0 (size: 0x1, flags: 0x6, type: 0x2)
		bool showDebug; // 0xa1 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0xa8
}
