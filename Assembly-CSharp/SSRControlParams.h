#pragma once

namespace rust 
{
	class SSRControlParams : public Object // 0x0
	{
	public:
		float fresnelCutoff; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float thicknessMin; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
		float thicknessMax; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		float thicknessStartDist; // 0x1c (size: 0x4, flags: 0x6, type: 0xc)
		float thicknessEndDist; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x28
}
