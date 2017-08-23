#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\HashSet<UnityEngine\Collider>.h"

namespace rust 
{
	class WaterCollision : public MonoBehaviour // 0x18
	{
	public:
		ListDictionary<UnityEngine.Collider,UnityEngine::List<UnityEngine.Collider>>* ignoredColliders; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::HashSet<UnityEngine::Collider> waterColliders; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x28
}
