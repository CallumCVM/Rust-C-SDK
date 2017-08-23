#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class LinuxGatewayIPAddressInformationCollection : public GatewayIPAddressInformationCollection // 0x18
	{
	public:
		bool is_readonly; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
