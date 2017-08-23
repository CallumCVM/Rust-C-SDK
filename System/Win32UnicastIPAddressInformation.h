#pragma once

#include "..\System\Net\NetworkInformation\Win32_IP_ADAPTER_UNICAST_ADDRESS.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32UnicastIPAddressInformation : public UnicastIPAddressInformation // 0x0
	{
	public:
		int if_index; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS info; // 0x18 (size: 0x40, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
