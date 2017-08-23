#pragma once

#include "TOD_ColorSpaceType.h"
#include "TOD_ColorRangeType.h"
#include "TOD_ColorOutputType.h"
#include "TOD_SkyQualityType.h"
#include "TOD_CloudQualityType.h"
#include "TOD_MeshQualityType.h"
#include "TOD_StarQualityType.h"
#include "TOD_CycleParameters.h"
#include "TOD_WorldParameters.h"
#include "TOD_AtmosphereParameters.h"
#include "TOD_DayParameters.h"
#include "TOD_NightParameters.h"
#include "TOD_SunParameters.h"
#include "TOD_MoonParameters.h"
#include "TOD_StarParameters.h"
#include "TOD_CloudParameters.h"
#include "TOD_LightParameters.h"
#include "TOD_FogParameters.h"
#include "TOD_AmbientParameters.h"
#include "TOD_ReflectionParameters.h"
#include "TOD_Components.h"
#include "TOD_Resources.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\ReflectionProbe.h"
#include "..\UnityEngine\Vector4.h"

namespace rust 
{
	class TOD_Sky : public MonoBehaviour // 0x18
	{
	public:
		TOD_CycleParameters* Cycle; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_WorldParameters* World; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_AtmosphereParameters* Atmosphere; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_DayParameters* Day; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_NightParameters* Night; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_SunParameters* Sun; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_MoonParameters* Moon; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_StarParameters* Stars; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_CloudParameters* Clouds; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_LightParameters* Light; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_FogParameters* Fog; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_AmbientParameters* Ambient; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_ReflectionParameters* Reflection; // 0x78 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_Components* <Components>k__BackingField; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		TOD_Resources* <Resources>k__BackingField; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::ReflectionProbe* <Probe>k__BackingField; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		int probeRenderID; // 0x98 (size: 0x4, flags: 0x1, type: 0x8)
		TOD_ColorSpaceType ColorSpace; // 0x9c (size: 0x4, flags: 0x6, type: 0x11)
		TOD_ColorRangeType ColorRange; // 0xa0 (size: 0x4, flags: 0x6, type: 0x11)
		TOD_ColorOutputType ColorOutput; // 0xa4 (size: 0x4, flags: 0x6, type: 0x11)
		TOD_SkyQualityType SkyQuality; // 0xa8 (size: 0x4, flags: 0x6, type: 0x11)
		TOD_CloudQualityType CloudQuality; // 0xac (size: 0x4, flags: 0x6, type: 0x11)
		TOD_MeshQualityType MeshQuality; // 0xb0 (size: 0x4, flags: 0x6, type: 0x11)
		TOD_StarQualityType StarQuality; // 0xb4 (size: 0x4, flags: 0x6, type: 0x11)
		bool <Initialized>k__BackingField; // 0xb8 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsDay>k__BackingField; // 0xb9 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsNight>k__BackingField; // 0xba (size: 0x1, flags: 0x1, type: 0x2)
		float <LerpValue>k__BackingField; // 0xbc (size: 0x4, flags: 0x1, type: 0xc)
		float <SunZenith>k__BackingField; // 0xc0 (size: 0x4, flags: 0x1, type: 0xc)
		float <SunAltitude>k__BackingField; // 0xc4 (size: 0x4, flags: 0x1, type: 0xc)
		float <SunAzimuth>k__BackingField; // 0xc8 (size: 0x4, flags: 0x1, type: 0xc)
		float <MoonZenith>k__BackingField; // 0xcc (size: 0x4, flags: 0x1, type: 0xc)
		float <MoonAltitude>k__BackingField; // 0xd0 (size: 0x4, flags: 0x1, type: 0xc)
		float <MoonAzimuth>k__BackingField; // 0xd4 (size: 0x4, flags: 0x1, type: 0xc)
		float <SunsetTime>k__BackingField; // 0xd8 (size: 0x4, flags: 0x1, type: 0xc)
		float <SunriseTime>k__BackingField; // 0xdc (size: 0x4, flags: 0x1, type: 0xc)
		float <LocalSiderealTime>k__BackingField; // 0xe0 (size: 0x4, flags: 0x1, type: 0xc)
		float <SunVisibility>k__BackingField; // 0xe4 (size: 0x4, flags: 0x1, type: 0xc)
		float <MoonVisibility>k__BackingField; // 0xe8 (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 <SunDirection>k__BackingField; // 0xec (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 <MoonDirection>k__BackingField; // 0xf8 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 <LightDirection>k__BackingField; // 0x104 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 <LocalSunDirection>k__BackingField; // 0x110 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 <LocalMoonDirection>k__BackingField; // 0x11c (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector3 <LocalLightDirection>k__BackingField; // 0x128 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Color <SunLightColor>k__BackingField; // 0x134 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <MoonLightColor>k__BackingField; // 0x144 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <SunRayColor>k__BackingField; // 0x154 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <MoonRayColor>k__BackingField; // 0x164 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <SunSkyColor>k__BackingField; // 0x174 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <MoonSkyColor>k__BackingField; // 0x184 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <SunMeshColor>k__BackingField; // 0x194 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <MoonMeshColor>k__BackingField; // 0x1a4 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <SunCloudColor>k__BackingField; // 0x1b4 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <MoonCloudColor>k__BackingField; // 0x1c4 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <FogColor>k__BackingField; // 0x1d4 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <GroundColor>k__BackingField; // 0x1e4 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <AmbientColor>k__BackingField; // 0x1f4 (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Color <MoonHaloColor>k__BackingField; // 0x204 (size: 0x10, flags: 0x1, type: 0x11)
		float timeSinceLightUpdate; // 0x214 (size: 0x4, flags: 0x1, type: 0xc)
		float timeSinceAmbientUpdate; // 0x218 (size: 0x4, flags: 0x1, type: 0xc)
		float timeSinceReflectionUpdate; // 0x21c (size: 0x4, flags: 0x1, type: 0xc)
		UnityEngine::Vector3 kBetaMie; // 0x220 (size: 0xc, flags: 0x1, type: 0x11)
		UnityEngine::Vector4 kSun; // 0x22c (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Vector4 k4PI; // 0x23c (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Vector4 kRadius; // 0x24c (size: 0x10, flags: 0x1, type: 0x11)
		UnityEngine::Vector4 kScale; // 0x25c (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x270
}
