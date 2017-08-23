#pragma once

#include "..\System\Net\IPAddress.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class IPAddressInformationImpl : public IPAddressInformation // 0x0
	{
	public:
		System::Net::IPAddress* address; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool is_dns_eligible; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool is_transient; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
