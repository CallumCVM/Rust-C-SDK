#pragma once

namespace rust 
{
	class ViewmodelScope : public MonoBehaviour // 0x18
	{
	public:
		float smoothSpeed; // 0x18 (size: 0x4, flags: 0x6, type: 0xc)
		bool wasVisible; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
