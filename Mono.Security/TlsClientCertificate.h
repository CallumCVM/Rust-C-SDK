#pragma once

#include "..\Mono\Security\X509\X509CertificateCollection.h"

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
{
{
{
{
					namespace Server
{
	class TlsClientCertificate : public HandshakeMessage // 0x48
	{
	public:
		Mono::Security::X509::X509CertificateCollection* clientCertificates; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x50
}
