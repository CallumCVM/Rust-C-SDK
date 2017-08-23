#pragma once

#include "..\System\Security\Cryptography\X509Certificates\StoreLocation.h"
#include "..\System\Security\Cryptography\X509Certificates\X509ChainElementCollection.h"
#include "..\System\Security\Cryptography\X509Certificates\X509ChainPolicy.h"
#include "..\System\Security\Cryptography\X509Certificates\X509ChainStatus.h"
#include "..\System\Security\Cryptography\X509Certificates\X500DistinguishedName.h"
#include "..\System\Security\Cryptography\AsymmetricAlgorithm.h"
#include "..\System\Security\Cryptography\X509Certificates\X509ChainElement.h"
#include "..\System\Security\Cryptography\X509Certificates\X509Store.h"
#include "..\System\Security\Cryptography\X509Certificates\X509Certificate2Collection.h"

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
	class X509Chain : public Object // 0x0
	{
	public:
		System::Security::Cryptography::X509Certificates::X509ChainElementCollection* elements; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509ChainPolicy* policy; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509ChainStatus* status; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Security::Cryptography::X509Certificates::X500DistinguishedName* working_issuer_name; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::AsymmetricAlgorithm* working_public_key; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509ChainElement* bce_restriction; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509Store* roots; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509Store* cas; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::StoreLocation location; // 0x58 (size: 0x4, flags: 0x1, type: 0x11)
		int max_path_length; // 0x5c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x60
}
