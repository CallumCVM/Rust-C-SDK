#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\X509\X509Store.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
	class X509Stores : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _storePath; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Security::X509::X509Store* _personal; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Store* _other; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Store* _intermediate; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Store* _trusted; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Store* _untrusted; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
