#pragma once

#include "..\System\Security\Permissions\StrongNamePublicKeyBlob.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Version.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class StrongNameMembershipCondition : public Object // 0x0
	{
	public:
		int version; // 0x10 (size: 0x4, flags: 0x21, type: 0x8)
		System::Security::Permissions::StrongNamePublicKeyBlob* blob; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Version* assemblyVersion; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
