#pragma once

#include "..\System\Security\Principal\WindowsIdentity.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Principal
{
	class WindowsPrincipal : public Object // 0x0
	{
	public:
		System::Security::Principal::WindowsIdentity* _identity; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString** m_roles; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x20
}
