#pragma once

#include "..\UnityEngine\LayerMask.h"
#include "..\System\Collections\Generic\HashSet<UnityEngine\GameObject>.h"
#include "..\System\Collections\Generic\HashSet<BaseEntity>.h"

namespace rust 
{
	class TriggerBase : public BaseMonoBehaviour // 0x18
	{
	public:
		System::Collections::Generic::HashSet<UnityEngine::GameObject> contents; // 0x18 (size: 0x8, flags: 0x86, type: 0x15)
		System::Collections::Generic::HashSet<BaseEntity> entityContents; // 0x20 (size: 0x8, flags: 0x86, type: 0x15)
		UnityEngine::LayerMask interestLayers; // 0x28 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
