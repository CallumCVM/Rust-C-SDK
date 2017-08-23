#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Net\NetworkInformation\Win32_IP_ADDR_STRING.h"
#include "..\System\Net\NetworkInformation\NetBiosNodeType.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32_FIXED_INFO : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* HostName; // 0x10 (size: 0x8, flags: 0x1006, type: 0xe)
		UnityEngine::UnicodeString* DomainName; // 0x18 (size: 0x8, flags: 0x1006, type: 0xe)
		__int64 CurrentDnsServer; // 0x20 (size: 0x8, flags: 0x6, type: 0x18)
		System::Net::NetworkInformation::Win32_IP_ADDR_STRING DnsServerList; // 0x28 (size: 0x20, flags: 0x6, type: 0x11)
		System::Net::NetworkInformation::NetBiosNodeType NodeType; // 0x48 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* ScopeId; // 0x50 (size: 0x8, flags: 0x1006, type: 0xe)
		unsigned int EnableRouting; // 0x58 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int EnableProxy; // 0x5c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int EnableDns; // 0x60 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x68
}
