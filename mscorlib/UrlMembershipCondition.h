#pragma once

#include "..\System\Security\Policy\Url.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class UrlMembershipCondition : public Object // 0x0
	{
	public:
		int version; // 0x10 (size: 0x4, flags: 0x21, type: 0x8)
		System::Security::Policy::Url* url; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* userUrl; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x28
}
