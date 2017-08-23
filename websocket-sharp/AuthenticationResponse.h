#pragma once

namespace WebSocketSharp
{
	namespace Net
{
	class AuthenticationResponse : public AuthenticationBase // 0x20
	{
	public:
		unsigned int _nonceCount; // 0x20 (size: 0x4, flags: 0x1, type: 0x9)
	}; // size = 0x28
}
