#pragma once

#include "..\System\Security\Permissions\UIPermissionClipboard.h"
#include "..\System\Security\Permissions\UIPermissionWindow.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class UIPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Security::Permissions::UIPermissionClipboard clipboard; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Permissions::UIPermissionWindow window; // 0x1c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
