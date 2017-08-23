#pragma once

#include "..\System\Net\NetworkInformation\UnixNetworkInterface.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class UnixIPv4InterfaceProperties : public IPv4InterfaceProperties // 0x0
	{
	public:
		System::Net::NetworkInformation::UnixNetworkInterface* iface; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x18
}
