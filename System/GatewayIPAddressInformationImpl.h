#pragma once

#include "..\System\Net\IPAddress.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class GatewayIPAddressInformationImpl : public GatewayIPAddressInformation // 0x0
	{
	public:
		System::Net::IPAddress* address; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
