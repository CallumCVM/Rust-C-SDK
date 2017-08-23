#pragma once

#include "..\Facepunch\Steamworks\Server.h"

namespace Facepunch
{
	namespace Steamworks
{
	class ServerAuth : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Server* server; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System.Action<unsigned __int64,unsigned __int64,Facepunch.Steamworks.ServerAuth.Status> OnAuthChange; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x20
}
