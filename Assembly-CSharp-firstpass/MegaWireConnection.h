#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class MegaWireConnection : public Object // 0x0
	{
	public:
		UnityEngine::Transform* start; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* end; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<MegaWireMass>* masses; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MegaWireSpring>* springs; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MegaWirePointConstraint>* constraints; // 0x30 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::List<MegaWireLengthConstraint>* lenconstraints; // 0x38 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::Vector3* masspos; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3 inOffset; // 0x48 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 outOffset; // 0x54 (size: 0xc, flags: 0x6, type: 0x11)
		float radius; // 0x60 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 windFrc; // 0x64 (size: 0xc, flags: 0x6, type: 0x11)
		float WireLength; // 0x70 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Matrix4x4 wtm; // 0x74 (size: 0x40, flags: 0x1, type: 0x11)
	}; // size = 0xb8
}
