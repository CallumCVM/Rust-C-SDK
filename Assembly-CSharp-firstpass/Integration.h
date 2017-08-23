#pragma once

#include "..\Facepunch\Models\Auth.h"
#include "..\Facepunch\Steamworks\Auth\Ticket.h"

namespace Facepunch
{
	class Integration : public BaseIntegration // 0x0
	{
	public:
		Facepunch::Models::Auth* _auth; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Facepunch::Steamworks::Auth::Ticket* _steamTicket; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
