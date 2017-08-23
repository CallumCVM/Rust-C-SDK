#pragma once

#include "..\System\Net\NetworkInformation\Win32_MIB_IPSTATS.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32IPGlobalStatistics : public IPGlobalStatistics // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_MIB_IPSTATS info; // 0x10 (size: 0x5c, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
