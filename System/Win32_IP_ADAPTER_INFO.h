#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\NetworkInformation\Win32_IP_ADDR_STRING.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_IP_ADAPTER_INFO : public Object // 0x0
	{
	public:
		__int64 Next; // 0x10 (size: 0x8, flags: 0x6, type: 0x18)
		int ComboIndex; // 0x18 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* AdapterName; // 0x20 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* Description; // 0x28 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned int AddressLength; // 0x30 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned char* Address; // 0x38 (size: 0x8, flags: 0x1006, type: 0x1d)
		unsigned int Index; // 0x40 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Type; // 0x44 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int DhcpEnabled; // 0x48 (size: 0x4, flags: 0x6, type: 0x9)
		__int64 CurrentIpAddress; // 0x50 (size: 0x8, flags: 0x6, type: 0x18)
		System::Net::NetworkInformation::Win32_IP_ADDR_STRING IpAddressList; // 0x58 (size: 0x20, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::Win32_IP_ADDR_STRING GatewayList; // 0x78 (size: 0x20, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::Win32_IP_ADDR_STRING DhcpServer; // 0x98 (size: 0x20, flags: 0x6, type: 0x11)
		bool HaveWins; // 0xb8 (size: 0x1, flags: 0x6, type: 0x2)
		System::Net::NetworkInformation::Win32_IP_ADDR_STRING PrimaryWinsServer; // 0xc0 (size: 0x20, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::Win32_IP_ADDR_STRING SecondaryWinsServer; // 0xe0 (size: 0x20, flags: 0x6, type: 0x11)
		__int64 LeaseObtained; // 0x100 (size: 0x8, flags: 0x6, type: 0xa)
		__int64 LeaseExpires; // 0x108 (size: 0x8, flags: 0x6, type: 0xa)
	}; // size = 0x110
}
