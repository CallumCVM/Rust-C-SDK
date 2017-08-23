#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\System\Object.h"
#include "..\System\Security\IPermission.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Security\Policy\Evidence.h"
#include "..\System\Security\Permissions\SecurityAction.h"
#include "..\System\Reflection\AssemblyName.h"
#include "..\System\Security\SecurityZone.h"

namespace System
{
	namespace Security
{
	class SecurityException : public SystemException // 0x60
	{
	public:
		UnityEngine::UnicodeString* permissionState; // 0x60 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* permissionType; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _granted; // 0x70 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _refused; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object _demanded; // 0x80 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Security::IPermission* _firstperm; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* _method; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::Evidence* _evidence; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Permissions::SecurityAction _action; // 0xa0 (size: 0x4, flags: 0x1, type: 0x11)
		System::Object _denyset; // 0xa8 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object _permitset; // 0xb0 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Reflection::AssemblyName* _assembly; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _url; // 0xc0 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::SecurityZone _zone; // 0xc8 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xd0
}
