#pragma once

#include "..\System\Security\Permissions\StorePermissionFlags.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class StorePermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Security::Permissions::StorePermissionFlags _flags; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
