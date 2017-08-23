#pragma once

#include "..\ParticleSystemLOD\State.h"

namespace rust 
{
	class ParticleSystemLOD : public LODComponentParticleSystem // 0x48
	{
	public:
		ParticleSystemLOD::State* States; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x50
}
