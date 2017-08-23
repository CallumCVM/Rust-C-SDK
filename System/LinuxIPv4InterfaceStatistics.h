#pragma once

#include "..\System\Net\NetworkInformation\LinuxNetworkInterface.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class LinuxIPv4InterfaceStatistics : public IPv4InterfaceStatistics // 0x0
	{
	public:
		System::Net::NetworkInformation::LinuxNetworkInterface* linux; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
