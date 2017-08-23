#pragma once

#include "..\Facepunch\Steamworks\Server.h"

namespace Facepunch
{
	namespace Steamworks
{
	class ServerQuery : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Server* server; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
	}; // size = 0x18
}
