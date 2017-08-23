#pragma once

#include "..\System\Security\AccessControl\InheritanceFlags.h"
#include "..\System\Security\AccessControl\PropagationFlags.h"
#include "..\System\Security\AccessControl\AceFlags.h"
#include "..\System\Security\AccessControl\AceType.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class GenericAce : public Object // 0x0
	{
	public:
		System::Security::AccessControl::InheritanceFlags inheritance; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::AccessControl::PropagationFlags propagation; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::AccessControl::AceFlags aceflags; // 0x18 (size: 0x1, flags: 0x1, type: 0x11)
		System::Security::AccessControl::AceType ace_type; // 0x1c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
