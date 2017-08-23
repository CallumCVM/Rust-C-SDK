#pragma once

#include "..\System\Security\Permissions\KeyContainerPermissionFlags.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class KeyContainerPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Security::Permissions::KeyContainerPermissionFlags _flags; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* _containerName; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int _spec; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString* _store; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _providerName; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		int _type; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
