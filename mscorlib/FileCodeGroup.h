#pragma once

#include "..\System\Security\Permissions\FileIOPermissionAccess.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class FileCodeGroup : public CodeGroup // 0x38
	{
	public:
		System::Security::Permissions::FileIOPermissionAccess m_access; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
