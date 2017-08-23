#pragma once

#include "..\System\Security\Permissions\FileIOPermissionAccess.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class FileIOPermission : public CodeAccessPermission // 0x0
	{
	public:
		bool m_Unrestricted; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		System::Security::Permissions::FileIOPermissionAccess m_AllFilesAccess; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Permissions::FileIOPermissionAccess m_AllLocalFilesAccess; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		System::Collections::ArrayList* readList; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* writeList; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* appendList; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* pathList; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
