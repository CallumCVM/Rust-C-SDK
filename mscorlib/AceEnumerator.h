#pragma once

#include "..\System\Security\AccessControl\GenericAcl.h"

namespace System
{
	namespace Security
{
{
		namespace AccessControl
{
	class AceEnumerator : public Object // 0x0
	{
	public:
		System::Security::AccessControl::GenericAcl* owner; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int current; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
