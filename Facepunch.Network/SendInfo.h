#pragma once

#include "..\Network\SendMethod.h"
#include "..\System\SByte.h"
#include "..\Network\Priority.h"
#include "..\UnityEngine\List.h"
#include "..\Network\Connection.h"

namespace Network
{
	class SendInfo : public ValueType // 0x0
	{
	public:
		Network::SendMethod method; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		System::SByte channel; // 0x14 (size: 0x1, flags: 0x6, type: 0x4)
		Network::Priority priority; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		bool broadcast; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::List<Network.Connection>* connections; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		Network::Connection* connection; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		unsigned __int64 connectionGUID; // 0x30 (size: 0x8, flags: 0x6, type: 0xb)
	}; // size = 0x38
}
