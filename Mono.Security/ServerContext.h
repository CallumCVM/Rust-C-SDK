#pragma once

#include "..\Mono\Security\Protocol\Tls\SslServerStream.h"

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
	class ServerContext : public Context // 0xd8
	{
	public:
		Mono::Security::Protocol::Tls::SslServerStream* sslStream; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		bool request_client_certificate; // 0xe0 (size: 0x1, flags: 0x1, type: 0x2)
		bool clientCertificateRequired; // 0xe1 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xe8
}
