#pragma once

#include "..\System\Net\Security\LocalCertificateSelectionCallback.h"
#include "..\System\Net\Security\RemoteCertificateValidationCallback.h"
#include "..\System\Security\Authentication\SslProtocols.h"

namespace WebSocketSharp
{
	namespace Net
{
	class SslConfiguration : public Object // 0x0
	{
	public:
		System::Net::Security::LocalCertificateSelectionCallback* _certSelectionCallback; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Net::Security::RemoteCertificateValidationCallback* _certValidationCallback; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		bool _checkCertRevocation; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
		System::Security::Authentication::SslProtocols _enabledProtocols; // 0x24 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
