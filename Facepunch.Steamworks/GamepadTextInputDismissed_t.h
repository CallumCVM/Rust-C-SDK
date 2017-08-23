#pragma once

namespace SteamNative
{
	class GamepadTextInputDismissed_t : public ValueType // 0x0
	{
	public:
		bool Submitted; // 0x10 (size: 0x1, flags: 0x1006, type: 0x2)
		unsigned int SubmittedText; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
