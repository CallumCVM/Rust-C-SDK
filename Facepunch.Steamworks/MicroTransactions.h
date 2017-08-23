#pragma once

#include "..\Facepunch\Steamworks\Client.h"
#include "..\Facepunch\Steamworks\MicroTransactions\AuthorizationResponse.h"

namespace Facepunch
{
	namespace Steamworks
{
	class MicroTransactions : public Object // 0x0
	{
	public:
		Facepunch::Steamworks::Client* client; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		Facepunch::Steamworks::MicroTransactions::AuthorizationResponse* OnAuthorizationResponse; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
