#pragma once

#include "..\System\Net\NetworkInformation\Win32LengthFlagsUnion.h"
#include "..\System\Net\NetworkInformation\Win32_SOCKET_ADDRESS.h"
#include "..\System\Net\NetworkInformation\PrefixOrigin.h"
#include "..\System\Net\NetworkInformation\SuffixOrigin.h"
#include "..\System\Net\NetworkInformation\DuplicateAddressDetectionState.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_IP_ADAPTER_UNICAST_ADDRESS : public ValueType // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags; // 0x10 (size: 0x8, flags: 0x6, type: 0x11)
		__int64 Next; // 0x18 (size: 0x8, flags: 0x6, type: 0x18)
		System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::PrefixOrigin PrefixOrigin; // 0x30 (size: 0x4, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::SuffixOrigin SuffixOrigin; // 0x34 (size: 0x4, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::DuplicateAddressDetectionState DadState; // 0x38 (size: 0x4, flags: 0x6, type: 0x11)
		unsigned int ValidLifetime; // 0x3c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int PreferredLifetime; // 0x40 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int LeaseLifetime; // 0x44 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned char OnLinkPrefixLength; // 0x48 (size: 0x1, flags: 0x6, type: 0x5)
	}; // size = 0x50
}
