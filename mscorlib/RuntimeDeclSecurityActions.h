#pragma once

#include "..\System\Security\RuntimeDeclSecurityEntry.h"

namespace System
{
	namespace Security
{
	class RuntimeDeclSecurityActions : public ValueType // 0x0
	{
	public:
		System::Security::RuntimeDeclSecurityEntry cas; // 0x10 (size: 0x10, flags: 0x6, type: 0x11)
		System::Security::RuntimeDeclSecurityEntry noncas; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		System::Security::RuntimeDeclSecurityEntry choice; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
