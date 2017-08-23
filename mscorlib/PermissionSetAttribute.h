#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class PermissionSetAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* file; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		bool isUnicodeEncoded; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* xml; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* hex; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x40
}
