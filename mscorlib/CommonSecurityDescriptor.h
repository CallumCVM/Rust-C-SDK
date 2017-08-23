#pragma once

#include "..\System\Security\AccessControl\ControlFlags.h"
#include "..\System\Security\Principal\SecurityIdentifier.h"
#include "..\System\Security\AccessControl\SystemAcl.h"
#include "..\System\Security\AccessControl\DiscretionaryAcl.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class CommonSecurityDescriptor : public GenericSecurityDescriptor // 0x0
	{
	public:
		bool isContainer; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		bool isDS; // 0x11 (size: 0x1, flags: 0x1, type: 0x2)
		System::Security::AccessControl::ControlFlags flags; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Principal::SecurityIdentifier* owner; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Principal::SecurityIdentifier* group; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::AccessControl::SystemAcl* systemAcl; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
