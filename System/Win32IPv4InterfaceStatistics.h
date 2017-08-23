#pragma once

#include "..\System\Net\NetworkInformation\Win32_MIB_IFROW.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class Win32IPv4InterfaceStatistics : public IPv4InterfaceStatistics // 0x0
	{
	public:
		System::Net::NetworkInformation::Win32_MIB_IFROW info; // 0x10 (size: 0x70, flags: 0x1, type: 0x11)
	}; // size = 0x80
}
