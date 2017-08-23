#pragma once

#include "..\System\Security\Cryptography\X509Certificates\X509Certificate2.h"
#include "..\System\Security\Cryptography\X509Certificates\X509ChainStatus.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\X509Certificates\X509ChainStatusFlags.h"

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
	class X509ChainElement : public Object // 0x0
	{
	public:
		System::Security::Cryptography::X509Certificates::X509Certificate2* certificate; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::X509ChainStatus* status; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* info; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::X509Certificates::X509ChainStatusFlags compressed_status_flags; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
