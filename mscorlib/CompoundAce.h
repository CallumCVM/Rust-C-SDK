#pragma once

#include "..\System\Security\AccessControl\CompoundAceType.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class CompoundAce : public KnownAce // 0x30
	{
	public:
		System::Security::AccessControl::CompoundAceType compound_ace_type; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
