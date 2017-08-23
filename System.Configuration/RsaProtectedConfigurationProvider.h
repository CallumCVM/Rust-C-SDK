#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\RSACryptoServiceProvider.h"

namespace System
{
	namespace Configuration
{
	class RsaProtectedConfigurationProvider : public ProtectedConfigurationProvider // 0x28
	{
	public:
		UnityEngine::UnicodeString* cspProviderName; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* keyContainerName; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::RSACryptoServiceProvider* rsa; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool useMachineContainer; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
		bool useOAEP; // 0x41 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
