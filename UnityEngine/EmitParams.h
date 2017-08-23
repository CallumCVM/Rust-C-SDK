#pragma once

#include "..\UnityEngine\ParticleSystem\Particle.h"

namespace rust 
{
	class EmitParams : public ValueType // 0x0
	{
	public:
		UnityEngine::ParticleSystem::Particle m_Particle; // 0x10 (size: 0x78, flags: 0x3, type: 0x11)
		bool m_PositionSet; // 0x88 (size: 0x1, flags: 0x3, type: 0x2)
		bool m_VelocitySet; // 0x89 (size: 0x1, flags: 0x3, type: 0x2)
		bool m_AxisOfRotationSet; // 0x8a (size: 0x1, flags: 0x3, type: 0x2)
		bool m_RotationSet; // 0x8b (size: 0x1, flags: 0x3, type: 0x2)
		bool m_AngularVelocitySet; // 0x8c (size: 0x1, flags: 0x3, type: 0x2)
		bool m_StartSizeSet; // 0x8d (size: 0x1, flags: 0x3, type: 0x2)
		bool m_StartColorSet; // 0x8e (size: 0x1, flags: 0x3, type: 0x2)
		bool m_RandomSeedSet; // 0x8f (size: 0x1, flags: 0x3, type: 0x2)
		bool m_StartLifetimeSet; // 0x90 (size: 0x1, flags: 0x3, type: 0x2)
		bool m_ApplyShapeToPosition; // 0x91 (size: 0x1, flags: 0x3, type: 0x2)
	}; // size = 0x98
}
