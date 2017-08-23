#pragma once

#include "..\System\AppDomain.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Security\PermissionSet.h"

namespace System
{
	namespace Security
{
	class SecurityFrame : public ValueType // 0x0
	{
	public:
		System::AppDomain* _domain; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* _method; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* _assert; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* _deny; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* _permitonly; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
