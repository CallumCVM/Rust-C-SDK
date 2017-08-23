#pragma once

#include "..\System\Security\Permissions\KeyContainerPermissionAccessEntryCollection.h"
#include "..\System\Security\Permissions\KeyContainerPermissionFlags.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class KeyContainerPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Security::Permissions::KeyContainerPermissionAccessEntryCollection* _accessEntries; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Permissions::KeyContainerPermissionFlags _flags; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
