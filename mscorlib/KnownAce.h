#pragma once

#include "..\System\Security\Principal\SecurityIdentifier.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class KnownAce : public GenericAce // 0x20
	{
	public:
		int access_mask; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		System::Security::Principal::SecurityIdentifier* identifier; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
