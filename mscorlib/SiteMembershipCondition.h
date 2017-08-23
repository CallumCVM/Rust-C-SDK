#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class SiteMembershipCondition : public Object // 0x0
	{
	public:
		int version; // 0x10 (size: 0x4, flags: 0x21, type: 0x8)
		UnityEngine::UnicodeString* _site; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
