#pragma once

#include "..\System\Security\Permissions\HostProtectionResource.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class HostProtectionPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Security::Permissions::HostProtectionResource _resources; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
