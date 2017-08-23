#pragma once

#include "..\System\Security\Permissions\HostProtectionResource.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class HostProtectionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Security::Permissions::HostProtectionResource _resources; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
