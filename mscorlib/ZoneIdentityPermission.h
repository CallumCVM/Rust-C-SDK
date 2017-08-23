#pragma once

#include "..\System\Security\SecurityZone.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class ZoneIdentityPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Security::SecurityZone zone; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
