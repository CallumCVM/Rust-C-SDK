#pragma once

#include "..\System\Security\Permissions\SecurityPermissionFlag.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class SecurityPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Security::Permissions::SecurityPermissionFlag m_Flags; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
