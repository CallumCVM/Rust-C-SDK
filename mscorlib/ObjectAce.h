#pragma once

#include "..\System\Guid.h"
#include "..\System\Security\AccessControl\ObjectAceFlags.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class ObjectAce : public QualifiedAce // 0x40
	{
	public:
		System::Guid object_ace_type; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
		System::Guid inherited_object_type; // 0x50 (size: 0x10, flags: 0x1, type: 0x11)
		System::Security::AccessControl::ObjectAceFlags object_ace_flags; // 0x60 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x68
}
