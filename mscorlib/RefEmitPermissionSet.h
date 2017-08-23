#pragma once

#include "..\System\Security\Permissions\SecurityAction.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Reflection
{
{
		namespace Emit
{
	class RefEmitPermissionSet : public ValueType // 0x0
	{
	public:
		System::Security::Permissions::SecurityAction action; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::UnicodeString* pset; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
	}; // size = 0x20
}
