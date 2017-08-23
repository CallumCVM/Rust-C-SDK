#pragma once

#include "..\System\Net\NetworkInformation\Win32LengthFlagsUnion.h"
#include "..\System\Net\NetworkInformation\Win32_SOCKET_ADDRESS.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_IP_ADAPTER_DNS_SERVER_ADDRESS : public ValueType // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags; // 0x10 (size: 0x8, flags: 0x6, type: 0x11)
		__int64 Next; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x30
}
