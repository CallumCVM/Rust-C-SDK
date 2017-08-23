#pragma once

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class FileDialogPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		bool canOpen; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		bool canSave; // 0x19 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x20
}
