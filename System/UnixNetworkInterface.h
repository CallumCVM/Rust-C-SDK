#pragma once

#include "..\System\Net\NetworkInformation\IPv4InterfaceStatistics.h"
#include "..\System\Net\NetworkInformation\IPInterfaceProperties.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"
#include "..\System\Net\NetworkInformation\NetworkInterfaceType.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class UnixNetworkInterface : public NetworkInterface // 0x0
	{
	public:
		System::Net::NetworkInformation::IPv4InterfaceStatistics* ipv4stats; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Net::NetworkInformation::IPInterfaceProperties* ipproperties; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::List<System.Net.IPAddress>* addresses; // 0x28 (size: 0x8, flags: 0x4, type: 0x15)
		unsigned char* macAddress; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		int index; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		System::Net::NetworkInformation::NetworkInterfaceType type; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
