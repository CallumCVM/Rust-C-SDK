#pragma once

#include "..\Mono\Security\Protocol\Tls\SecurityProtocolType.h"
#include "..\Mono\Security\Protocol\Tls\SecurityCompressionType.h"
#include "..\Mono\Security\Protocol\Tls\TlsServerSettings.h"
#include "..\Mono\Security\Protocol\Tls\TlsClientSettings.h"
#include "..\Mono\Security\Protocol\Tls\SecurityParameters.h"
#include "..\Mono\Security\Protocol\Tls\CipherSuiteCollection.h"
#include "..\Mono\Security\Protocol\Tls\Handshake\HandshakeType.h"
#include "..\Mono\Security\Protocol\Tls\HandshakeState.h"
#include "..\Mono\Security\Protocol\Tls\TlsStream.h"
#include "..\System\Security\Cryptography\RandomNumberGenerator.h"
#include "..\Mono\Security\Protocol\Tls\RecordProtocol.h"

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
	class Context : public Object // 0x0
	{
	public:
		unsigned char* sessionId; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::Protocol::Tls::TlsServerSettings* serverSettings; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::TlsClientSettings* clientSettings; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::SecurityParameters* current; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::SecurityParameters* negotiating; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::SecurityParameters* read; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::SecurityParameters* write; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::CipherSuiteCollection* supportedCiphers; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* clientRandom; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* serverRandom; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* randomCS; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* randomSC; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* masterSecret; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* clientWriteKey; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* serverWriteKey; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* clientWriteIV; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* serverWriteIV; // 0x90 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::Protocol::Tls::TlsStream* handshakeMessages; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::RandomNumberGenerator* random; // 0xa0 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::RecordProtocol* recordProtocol; // 0xa8 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::SecurityProtocolType securityProtocol; // 0xb0 (size: 0x4, flags: 0x1, type: 0x11)
		Mono::Security::Protocol::Tls::SecurityCompressionType compressionMethod; // 0xb4 (size: 0x4, flags: 0x1, type: 0x11)
		Mono::Security::Protocol::Tls::Handshake::HandshakeType lastHandshakeMsg; // 0xb8 (size: 0x1, flags: 0x1, type: 0x11)
		Mono::Security::Protocol::Tls::HandshakeState handshakeState; // 0xbc (size: 0x4, flags: 0x1, type: 0x11)
		bool abbreviatedHandshake; // 0xc0 (size: 0x1, flags: 0x1, type: 0x2)
		bool receivedConnectionEnd; // 0xc1 (size: 0x1, flags: 0x1, type: 0x2)
		bool sentConnectionEnd; // 0xc2 (size: 0x1, flags: 0x1, type: 0x2)
		bool protocolNegotiated; // 0xc3 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned __int64 writeSequenceNumber; // 0xc8 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned __int64 readSequenceNumber; // 0xd0 (size: 0x8, flags: 0x1, type: 0xb)
	}; // size = 0xd8
}
