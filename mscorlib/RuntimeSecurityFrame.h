#pragma once

#include "..\System\AppDomain.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Security\RuntimeDeclSecurityEntry.h"

namespace System
{
	namespace Security
{
	class RuntimeSecurityFrame : public Object // 0x0
	{
	public:
		System::AppDomain* domain; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		System::Reflection::MethodInfo* method; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		System::Security::RuntimeDeclSecurityEntry assert; // 0x20 (size: 0x10, flags: 0x6, type: 0x11)
		System::Security::RuntimeDeclSecurityEntry deny; // 0x30 (size: 0x10, flags: 0x6, type: 0x11)
		System::Security::RuntimeDeclSecurityEntry permitonly; // 0x40 (size: 0x10, flags: 0x6, type: 0x11)
	}; // size = 0x50
}
