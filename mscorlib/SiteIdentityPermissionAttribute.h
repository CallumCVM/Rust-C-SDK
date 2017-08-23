#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class SiteIdentityPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		UnityEngine::UnicodeString* site; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
