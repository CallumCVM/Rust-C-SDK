#pragma once

#include "..\System\Net\NetworkInformation\NetworkInterfaceType.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class LinuxNetworkInterface : public UnixNetworkInterface // 0x40
	{
	public:
		UnityEngine::UnicodeString* iface_path; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* iface_operstate_path; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* iface_flags_path; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::Net::NetworkInformation::NetworkInterfaceType type; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x60
}
