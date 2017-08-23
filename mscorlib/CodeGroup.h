#pragma once

#include "..\System\Security\Policy\PolicyStatement.h"
#include "..\System\Security\Policy\IMembershipCondition.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class CodeGroup : public Object // 0x0
	{
	public:
		System::Security::Policy::PolicyStatement* m_policy; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Policy::IMembershipCondition* m_membershipCondition; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_description; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* m_children; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
