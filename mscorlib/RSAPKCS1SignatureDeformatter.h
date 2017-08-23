#pragma once

#include "..\System\Security\Cryptography\RSA.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RSAPKCS1SignatureDeformatter : public AsymmetricSignatureDeformatter // 0x0
	{
	public:
		System::Security::Cryptography::RSA* rsa; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* hashName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
