#pragma once

#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class DeployVolumeCapsule : public DeployVolume // 0xa0
	{
	public:
		UnityEngine::Vector3 center; // 0xa0 (size: 0xc, flags: 0x6, type: 0x11)
		float radius; // 0xac (size: 0x4, flags: 0x6, type: 0xc)
		float height; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xb8
}
