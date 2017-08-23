#pragma once

#include "..\System\Net\NetworkInformation\Win32_IP_ADDR_STRING.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_IP_PER_ADAPTER_INFO : public Object // 0x0
	{
	public:
		unsigned int AutoconfigEnabled; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int AutoconfigActive; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		__int64 CurrentDnsServer; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		System::Net::NetworkInformation::Win32_IP_ADDR_STRING DnsServerList; // 0x20 (size: 0x20, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
