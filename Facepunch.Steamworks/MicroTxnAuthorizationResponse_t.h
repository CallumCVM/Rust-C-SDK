#pragma once

namespace SteamNative
{
	class MicroTxnAuthorizationResponse_t : public ValueType // 0x0
	{
	public:
		unsigned int AppID; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned __int64 OrderID; // 0x18 (size: 0x8, flags: 0x6, type: 0xb)
		unsigned char Authorized; // 0x20 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x28
}
