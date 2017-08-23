#pragma once

#include "..\System\Security\Cryptography\CspProviderFlags.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\SecureString.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class CspParameters : public Object // 0x0
	{
	public:
		System::Security::Cryptography::CspProviderFlags _Flags; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* KeyContainerName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		int KeyNumber; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::UnicodeString* ProviderName; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		int ProviderType; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		System::Security::SecureString* _password; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		__int64 _windowHandle; // 0x40 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x48
}
