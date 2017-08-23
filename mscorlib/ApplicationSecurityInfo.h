#pragma once

#include "..\System\ActivationContext.h"
#include "..\System\Security\Policy\Evidence.h"
#include "..\System\ApplicationId.h"
#include "..\System\Security\PermissionSet.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class ApplicationSecurityInfo : public Object // 0x0
	{
	public:
		System::ActivationContext* _context; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::Evidence* _evidence; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::ApplicationId* _appid; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* _defaultSet; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::ApplicationId* _deployid; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
