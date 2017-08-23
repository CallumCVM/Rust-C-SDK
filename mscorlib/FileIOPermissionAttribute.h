#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Permissions\FileIOPermissionAccess.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class FileIOPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* append; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* path; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* read; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* write; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Permissions::FileIOPermissionAccess allFiles; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Permissions::FileIOPermissionAccess allLocalFiles; // 0x3c (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* changeAccessControl; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* viewAccessControl; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x50
}
