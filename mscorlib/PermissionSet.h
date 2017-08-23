#pragma once

#include "..\System\Security\Permissions\PermissionState.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Security\Policy\PolicyLevel.h"

namespace System
{
	namespace Security
{
	class PermissionSet : public Object // 0x0
	{
	public:
		System::Security::Permissions::PermissionState state; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Collections::ArrayList* list; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::PolicyLevel* _policyLevel; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		bool _declsec; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool _readOnly; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		bool* _ignored; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x38
}
