#pragma once

#include "..\System\Security\AccessControl\FileSystemRights.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class FileSystemAuditRule : public AuditRule // 0x30
	{
	public:
		System::Security::AccessControl::FileSystemRights rights; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
