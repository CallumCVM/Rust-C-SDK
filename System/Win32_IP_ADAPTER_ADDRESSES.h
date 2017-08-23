#pragma once

#include "..\System\Net\NetworkInformation\AlignmentUnion.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\NetworkInformation\NetworkInterfaceType.h"
#include "..\System\Net\NetworkInformation\OperationalStatus.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_IP_ADAPTER_ADDRESSES : public Object // 0x0
	{
	public:
		System::Net::NetworkInformation::AlignmentUnion Alignment; // 0x10 (size: 0x8, flags: 0x6, type: 0x11)
		__int64 Next; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		UnityEngine::UnicodeString* AdapterName; // 0x20 (size: 0x8, flags: 0x1006, type: 0xe)
		__int64 FirstUnicastAddress; // 0x28 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 FirstAnycastAddress; // 0x30 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 FirstMulticastAddress; // 0x38 (size: 0x8, flags: 0x6, type: 0x18)
		__int64 FirstDnsServerAddress; // 0x40 (size: 0x8, flags: 0x6, type: 0x18)
		UnityEngine::UnicodeString* DnsSuffix; // 0x48 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Description; // 0x50 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* FriendlyName; // 0x58 (size: 0x8, flags: 0x6, type: 0xe)
		unsigned char* PhysicalAddress; // 0x60 (size: 0x8, flags: 0x1006, type: 0x1d)
		unsigned int PhysicalAddressLength; // 0x68 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Flags; // 0x6c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int Mtu; // 0x70 (size: 0x4, flags: 0x6, type: 0x9)
		System::Net::NetworkInformation::NetworkInterfaceType IfType; // 0x74 (size: 0x4, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::OperationalStatus OperStatus; // 0x78 (size: 0x4, flags: 0x6, type: 0x11)
		int Ipv6IfIndex; // 0x7c (size: 0x4, flags: 0x6, type: 0x8)
		unsigned int* ZoneIndices; // 0x80 (size: 0x8, flags: 0x1006, type: 0x1d)
	}; // size = 0x88
}
