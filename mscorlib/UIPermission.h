#pragma once

#include "..\System\Security\Permissions\UIPermissionWindow.h"
#include "..\System\Security\Permissions\UIPermissionClipboard.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class UIPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Security::Permissions::UIPermissionWindow _window; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Permissions::UIPermissionClipboard _clipboard; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
