#pragma once

#include "..\System\Net\IPEndPoint.h"
#include "..\System\Net\NetworkInformation\TcpState.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class TcpConnectionInformationImpl : public TcpConnectionInformation // 0x0
	{
	public:
		System::Net::IPEndPoint* local; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::IPEndPoint* remote; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::NetworkInformation::TcpState state; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
