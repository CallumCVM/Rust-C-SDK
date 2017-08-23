#pragma once

namespace UnityEngine
{
	class ColorUsageAttribute : public PropertyAttribute // 0x18
	{
	public:
		bool showAlpha; // 0x14 (size: 0x1, flags: 0x26, type: 0x2)
		bool hdr; // 0x15 (size: 0x1, flags: 0x26, type: 0x2)
		float minBrightness; // 0x18 (size: 0x4, flags: 0x26, type: 0xc)
		float maxBrightness; // 0x1c (size: 0x4, flags: 0x26, type: 0xc)
		float minExposureValue; // 0x20 (size: 0x4, flags: 0x26, type: 0xc)
		float maxExposureValue; // 0x24 (size: 0x4, flags: 0x26, type: 0xc)
	}; // size = 0x28
}
