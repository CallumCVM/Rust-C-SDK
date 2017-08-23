#pragma once

#include "..\System\Security\Permissions\ReflectionPermissionFlag.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class ReflectionPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Security::Permissions::ReflectionPermissionFlag flags; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		bool memberAccess; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
		bool reflectionEmit; // 0x1d (size: 0x1, flags: 0x1, type: 0x2)
		bool typeInfo; // 0x1e (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
