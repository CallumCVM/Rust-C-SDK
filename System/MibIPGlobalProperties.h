#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class MibIPGlobalProperties : public IPGlobalProperties // 0x0
	{
	public:
		UnityEngine::UnicodeString* StatisticsFile; // 0x10 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* StatisticsFileIPv6; // 0x18 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* TcpFile; // 0x20 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* Tcp6File; // 0x28 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* UdpFile; // 0x30 (size: 0x8, flags: 0x26, type: 0xe)
		UnityEngine::UnicodeString* Udp6File; // 0x38 (size: 0x8, flags: 0x26, type: 0xe)
	}; // size = 0x40
}
