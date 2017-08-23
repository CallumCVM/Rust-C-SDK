#pragma once

#include "..\System\Security\Permissions\ReflectionPermissionFlag.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class ReflectionPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Security::Permissions::ReflectionPermissionFlag flags; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
