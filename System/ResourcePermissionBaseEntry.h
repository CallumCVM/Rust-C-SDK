#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class ResourcePermissionBaseEntry : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString** permissionAccessPath; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int permissionAccess; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
