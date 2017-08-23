#pragma once

#include "..\System\Security\Principal\IdentityReference.h"
#include "..\System\Security\AccessControl\InheritanceFlags.h"
#include "..\System\Security\AccessControl\PropagationFlags.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class AuthorizationRule : public Object // 0x0
	{
	public:
		System::Security::Principal::IdentityReference* identity; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int accessMask; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		bool isInherited; // 0x1c (size: 0x1, flags: 0x1, type: 0x2)
		System::Security::AccessControl::InheritanceFlags inheritanceFlags; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::AccessControl::PropagationFlags propagationFlags; // 0x24 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
