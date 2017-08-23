#pragma once

#include "..\UnityEngine\Camera.h"
#include "..\System\Action.h"

namespace rust 
{
	class CommandBufferManager : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Camera* _targetCamera; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System.Collections.Generic.Dictionary<int,CommandBufferManager.CommandBufferEntry> commandBuffers; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action* OnPreRenderCall; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action* OnPreCullCall; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		bool changed; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
