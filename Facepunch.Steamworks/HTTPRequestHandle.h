#pragma once

namespace SteamNative
{
	class HTTPRequestHandle : public ValueType // 0x0
	{
	public:
		unsigned int Value; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x18
}
