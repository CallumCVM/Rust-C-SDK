#pragma once

#include "..\System\Reflection\Assembly\ResolveEventHolder.h"
#include "..\System\Security\Policy\Evidence.h"
#include "..\System\Security\PermissionSet.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Reflection
{
	class Assembly : public Object // 0x0
	{
	public:
		__int64 _mono_assembly; // 0x10 (size: 0x8, flags: 0x1, type: 0x18)
		System::Reflection::Assembly::ResolveEventHolder* resolve_event_holder; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::Evidence* _evidence; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* _minimum; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		System::Security::PermissionSet* _optional; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		System::Security::PermissionSet* _refuse; // 0x38 (size: 0x8, flags: 0x3, type: 0x12)
		System::Security::PermissionSet* _granted; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* _denied; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		bool fromByteArray; // 0x50 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* assemblyName; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x60
}
