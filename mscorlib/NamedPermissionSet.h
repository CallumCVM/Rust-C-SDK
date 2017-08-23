#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
	class NamedPermissionSet : public PermissionSet // 0x38
	{
	public:
		UnityEngine::UnicodeString* name; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* description; // 0x40 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x48
}
