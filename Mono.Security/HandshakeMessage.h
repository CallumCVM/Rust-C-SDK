#pragma once

#include "..\Mono\Security\Protocol\Tls\Context.h"
#include "..\Mono\Security\Protocol\Tls\Handshake\HandshakeType.h"
#include "..\Mono\Security\Protocol\Tls\ContentType.h"

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
{
{
{
				namespace Handshake
{
	class HandshakeMessage : public TlsStream // 0x30
	{
	public:
		Mono::Security::Protocol::Tls::Context* context; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* cache; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::Protocol::Tls::Handshake::HandshakeType handshakeType; // 0x40 (size: 0x1, flags: 0x1, type: 0x11)
		Mono::Security::Protocol::Tls::ContentType contentType; // 0x41 (size: 0x1, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
