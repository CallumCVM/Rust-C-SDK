#pragma once

#include "..\System\Net\NetworkInformation\Win32_IP_ADAPTER_ADDRESSES.h"
#include "..\System\Net\NetworkInformation\Win32_MIB_IFROW.h"
#include "..\System\Net\NetworkInformation\Win32IPv4InterfaceStatistics.h"
#include "..\System\Net\NetworkInformation\IPInterfaceProperties.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32NetworkInterface2 : public NetworkInterface // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES* addr; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::NetworkInformation::Win32_MIB_IFROW mib4; // 0x18 (size: 0x70, flags: 0x1, type: 0x11)
		System::Net::NetworkInformation::Win32_MIB_IFROW mib6; // 0x88 (size: 0x70, flags: 0x1, type: 0x11)
		System::Net::NetworkInformation::Win32IPv4InterfaceStatistics* ip4stats; // 0xf8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::NetworkInformation::IPInterfaceProperties* ip_if_props; // 0x100 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x108
}
