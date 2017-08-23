#pragma once

namespace rust 
{
	class DepthOfFieldSettings : public ValueType // 0x0
	{
	public:
		bool wants; // 0x10 (size: 0x1, flags: 0x6, type: 0x2)
		float focalDistance; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float focalSize; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float blurSize; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x20
}
