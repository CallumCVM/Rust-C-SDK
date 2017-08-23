#pragma once

#include "..\System\Security\Cryptography\OidCollection.h"
#include "..\System\Security\Cryptography\AsnDecodeStatus.h"

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
	class X509EnhancedKeyUsageExtension : public X509Extension // 0x28
	{
	public:
		System::Security::Cryptography::OidCollection* _enhKeyUsage; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::AsnDecodeStatus _status; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
