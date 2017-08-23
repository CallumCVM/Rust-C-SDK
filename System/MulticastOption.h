#pragma once

#include "..\System\Net\IPAddress.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class MulticastOption : public Object // 0x0
	{
	public:
		System::Net::IPAddress* group; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::IPAddress* local; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		int iface_index; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
