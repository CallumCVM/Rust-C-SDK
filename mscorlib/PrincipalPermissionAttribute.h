#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class PrincipalPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		bool authenticated; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* role; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x30
}
