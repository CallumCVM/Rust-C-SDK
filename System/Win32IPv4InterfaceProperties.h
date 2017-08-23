#pragma once

#include "..\System\Net\NetworkInformation\Win32_IP_ADAPTER_INFO.h"
#include "..\System\Net\NetworkInformation\Win32_IP_PER_ADAPTER_INFO.h"
#include "..\System\Net\NetworkInformation\Win32_MIB_IFROW.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32IPv4InterfaceProperties : public IPv4InterfaceProperties // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_IP_ADAPTER_INFO* ainfo; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::NetworkInformation::Win32_IP_PER_ADAPTER_INFO* painfo; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::NetworkInformation::Win32_MIB_IFROW mib; // 0x20 (size: 0x70, flags: 0x1, type: 0x11)
	}; // size = 0x90
}
