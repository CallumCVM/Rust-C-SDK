#pragma once

#include "..\System\Security\SecurityZone.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class ZoneMembershipCondition : public Object // 0x0
	{
	public:
		int version; // 0x10 (size: 0x4, flags: 0x21, type: 0x8)
		System::Security::SecurityZone zone; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
