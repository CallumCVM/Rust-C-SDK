#pragma once

#include "..\System\Security\Permissions\PermissionState.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class RegistryPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Security::Permissions::PermissionState _state; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Collections::ArrayList* createList; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* readList; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* writeList; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
