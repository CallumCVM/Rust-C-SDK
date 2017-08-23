#pragma once

#include "..\System\Security\Cryptography\OidCollection.h"
#include "..\System\Security\Cryptography\X509Certificates\X509Certificate2Collection.h"
#include "..\System\Security\Cryptography\X509Certificates\X509RevocationFlag.h"
#include "..\System\Security\Cryptography\X509Certificates\X509RevocationMode.h"
#include "..\System\TimeSpan.h"
#include "..\System\Security\Cryptography\X509Certificates\X509VerificationFlags.h"
#include "..\System\DateTime.h"

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
	class X509ChainPolicy : public Object // 0x0
	{
	public:
		System::Security::Cryptography::OidCollection* apps; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::OidCollection* cert; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509Certificate2Collection* store; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509RevocationFlag rflag; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Cryptography::X509Certificates::X509RevocationMode mode; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
		System::TimeSpan timeout; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
		System::Security::Cryptography::X509Certificates::X509VerificationFlags vflags; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
		System::DateTime vtime; // 0x40 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
