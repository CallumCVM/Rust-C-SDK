#pragma once

#include "TOD_CycleParameters.h"
#include "TOD_WorldParameters.h"
#include "TOD_AtmosphereParameters.h"
#include "TOD_DayParameters.h"
#include "TOD_NightParameters.h"
#include "TOD_SunParameters.h"
#include "TOD_MoonParameters.h"
#include "TOD_LightParameters.h"
#include "TOD_StarParameters.h"
#include "TOD_CloudParameters.h"
#include "TOD_FogParameters.h"
#include "TOD_AmbientParameters.h"
#include "TOD_ReflectionParameters.h"

namespace rust 
{
	class TOD_Parameters : public Object // 0x0
	{
	public:
		TOD_CycleParameters* Cycle; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_WorldParameters* World; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_AtmosphereParameters* Atmosphere; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_DayParameters* Day; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_NightParameters* Night; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_SunParameters* Sun; // 0x38 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_MoonParameters* Moon; // 0x40 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_LightParameters* Light; // 0x48 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_StarParameters* Stars; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_CloudParameters* Clouds; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_FogParameters* Fog; // 0x60 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_AmbientParameters* Ambient; // 0x68 (size: 0x8, flags: 0x6, type: 0x12)
		TOD_ReflectionParameters* Reflection; // 0x70 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x78
}
