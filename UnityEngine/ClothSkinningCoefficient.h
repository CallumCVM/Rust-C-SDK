#pragma once

namespace UnityEngine
{
	class ClothSkinningCoefficient : public ValueType // 0x0
	{
	public:
		float maxDistance; // 0x10 (size: 0x4, flags: 0x6, type: 0xc)
		float collisionSphereDistance; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
