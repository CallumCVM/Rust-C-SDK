#pragma once

#include "..\System\Net\NetworkInformation\Win32_MIB_UDPSTATS.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32UdpStatistics : public UdpStatistics // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_MIB_UDPSTATS info; // 0x10 (size: 0x14, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
