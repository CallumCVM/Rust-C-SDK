#pragma once

#include "..\System\Security\Permissions\HostProtectionResource.h"

namespace System
{
	namespace Security
{
	class HostProtectionException : public SystemException // 0x60
	{
	public:
		System::Security::Permissions::HostProtectionResource _protected; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Permissions::HostProtectionResource _demanded; // 0x64 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
