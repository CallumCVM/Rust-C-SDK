#pragma once

namespace UnityEngine
{
	class WaitForSecondsRealtime : public CustomYieldInstruction // 0x0
	{
	public:
		float waitTime; // 0x10 (size: 0x4, flags: 0x1, type: 0xc)
	}; // size = 0x18
}
