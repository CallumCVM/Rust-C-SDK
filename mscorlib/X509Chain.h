#pragma once

#include "..\Mono\Security\X509\X509CertificateCollection.h"
#include "..\Mono\Security\X509\X509Certificate.h"
#include "..\Mono\Security\X509\X509ChainStatusFlags.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
	class X509Chain : public Object // 0x0
	{
	public:
		Mono::Security::X509::X509CertificateCollection* roots; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509CertificateCollection* certs; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Certificate* _root; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509CertificateCollection* _chain; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509ChainStatusFlags _status; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
