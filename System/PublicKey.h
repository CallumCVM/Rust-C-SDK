#pragma once

#include "..\System\Security\Cryptography\AsymmetricAlgorithm.h"
#include "..\System\Security\Cryptography\AsnEncodedData.h"
#include "..\System\Security\Cryptography\Oid.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
{
{
			namespace X509Certificates
{
	class PublicKey : public Object // 0x0
	{
	public:
		System::Security::Cryptography::AsymmetricAlgorithm* _key; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::AsnEncodedData* _keyValue; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::AsnEncodedData* _params; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::Oid* _oid; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
