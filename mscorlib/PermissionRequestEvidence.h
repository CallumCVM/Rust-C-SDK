#pragma once

#include "..\System\Security\PermissionSet.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class PermissionRequestEvidence : public Object // 0x0
	{
	public:
		System::Security::PermissionSet* requested; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* optional; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* denied; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
