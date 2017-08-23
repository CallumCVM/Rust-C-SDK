#pragma once

namespace rust 
{
	class SphereEntity : public BaseEntity // 0x130
	{
	public:
		float currentRadius; // 0x130 (size: 0x4, flags: 0x6, type: 0xc)
		float lerpRadius; // 0x134 (size: 0x4, flags: 0x6, type: 0xc)
		float lerpSpeed; // 0x138 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x140
}
