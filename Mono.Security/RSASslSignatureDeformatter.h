#pragma once

#include "..\System\Security\Cryptography\RSA.h"
#include "..\System\Security\Cryptography\HashAlgorithm.h"

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Tls
{
	class RSASslSignatureDeformatter : public AsymmetricSignatureDeformatter // 0x0
	{
	public:
		System::Security::Cryptography::RSA* key; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::HashAlgorithm* hash; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
