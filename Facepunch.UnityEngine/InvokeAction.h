#pragma once

#include "..\UnityEngine\Behaviour.h"
#include "..\System\Action.h"

namespace rust 
{
	class InvokeAction : public ValueType // 0x0
	{
	public:
		UnityEngine::Behaviour* sender; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Action* action; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float initial; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float repeat; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		float random; // 0x28 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x30
}
