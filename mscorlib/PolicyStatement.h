#pragma once

#include "..\System\Security\PermissionSet.h"
#include "..\System\Security\Policy\PolicyStatementAttribute.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class PolicyStatement : public Object // 0x0
	{
	public:
		System::Security::PermissionSet* perms; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::PolicyStatementAttribute attrs; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
