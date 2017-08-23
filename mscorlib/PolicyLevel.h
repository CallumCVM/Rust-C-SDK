#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Policy\CodeGroup.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Security\PolicyLevelType.h"
#include "..\System\Collections\Hashtable.h"
#include "..\System\Security\SecurityElement.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class PolicyLevel : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* label; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Policy::CodeGroup* root_code_group; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* full_trust_assemblies; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* named_permission_sets; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _location; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::PolicyLevelType _type; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		System::Collections::Hashtable* fullNames; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::SecurityElement* xml; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
