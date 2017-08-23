#pragma once

#include "..\Mono\Security\Protocol\Tls\SslStreamBase.h"
#include "..\System\Net\Security\RemoteCertificateValidationCallback.h"
#include "..\System\Net\Security\LocalCertificateSelectionCallback.h"

namespace System
{
	namespace Net
{
{
		namespace Security
{
	class SslStream : public AuthenticatedStream // 0x28
	{
	public:
		Mono::Security::Protocol::Tls::SslStreamBase* ssl_stream; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Security::RemoteCertificateValidationCallback* validation_callback; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Security::LocalCertificateSelectionCallback* selection_callback; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
