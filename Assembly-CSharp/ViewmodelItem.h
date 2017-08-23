#pragma once

#include "..\UnityEngine\Animator.h"

namespace rust 
{
	class ViewmodelItem : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Animator* viewmodelAnimator; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool vOneRun; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		bool bWasOn; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
