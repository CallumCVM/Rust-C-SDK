#pragma once

#include "..\System\Security\Permissions\IsolatedStorageContainment.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class IsolatedStoragePermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Security::Permissions::IsolatedStorageContainment usage_allowed; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		__int64 user_quota; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x28
}
