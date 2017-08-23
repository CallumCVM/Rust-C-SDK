#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Permissions
{
	class SiteIdentityPermission : public CodeAccessPermission // 0x0
	{
	public:
		UnityEngine::UnicodeString* _site; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x18
}
