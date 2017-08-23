#pragma once

#include "..\System\Security\SecurityZone.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class ZoneIdentityPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Security::SecurityZone zone; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
