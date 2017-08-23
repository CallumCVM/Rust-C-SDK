#pragma once

#include "..\System\Net\NetworkInformation\Win32_MIB_TCPSTATS.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32TcpStatistics : public TcpStatistics // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_MIB_TCPSTATS info; // 0x10 (size: 0x3c, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
