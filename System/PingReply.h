#pragma once

#include "..\System\Net\IPAddress.h"
#include "..\System\Net\NetworkInformation\PingOptions.h"
#include "..\System\Net\NetworkInformation\IPStatus.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class PingReply : public Object // 0x0
	{
	public:
		System::Net::IPAddress* address; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Net::NetworkInformation::PingOptions* options; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 rtt; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		System::Net::NetworkInformation::IPStatus status; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
