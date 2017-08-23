#pragma once

#include "..\System\Net\NetworkInformation\IPv4InterfaceProperties.h"
#include "..\System\Net\NetworkInformation\UnixNetworkInterface.h"
#include "..\UnityEngine\List.h"
#include "..\System\Net\NetworkInformation\IPAddressCollection.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class UnixIPInterfaceProperties : public IPInterfaceProperties // 0x0
	{
	public:
		System::Net::NetworkInformation::IPv4InterfaceProperties* ipv4iface_properties; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		System::Net::NetworkInformation::UnixNetworkInterface* iface; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		UnityEngine::List<System.Net.IPAddress>* addresses; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Net::NetworkInformation::IPAddressCollection* dns_servers; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::NetworkInformation::IPAddressCollection* gateways; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* dns_suffix; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		System::DateTime last_parse; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
