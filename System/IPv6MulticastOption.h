#pragma once

#include "..\System\Net\IPAddress.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class IPv6MulticastOption : public Object // 0x0
	{
	public:
		System::Net::IPAddress* group; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 ifIndex; // 0x18 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x20
}
