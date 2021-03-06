#pragma once

#include "..\Mono\Security\Protocol\Tls\CertificateValidationCallback.h"
#include "..\Mono\Security\Protocol\Tls\PrivateKeySelectionCallback.h"
#include "..\Mono\Security\Protocol\Tls\CertificateValidationCallback2.h"

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
	class SslServerStream : public SslStreamBase // 0x70
	{
	public:
		Mono::Security::Protocol::Tls::CertificateValidationCallback* ClientCertValidation; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::PrivateKeySelectionCallback* PrivateKeySelection; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::CertificateValidationCallback2* ClientCertValidation2; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x88
}
