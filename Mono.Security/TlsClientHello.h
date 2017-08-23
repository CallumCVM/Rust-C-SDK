#pragma once

#include "..\System\Int16.h"

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
	class TlsClientHello : public HandshakeMessage // 0x48
	{
	public:
		unsigned char* random; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* sessionId; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Int16* cipherSuites; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* compressionMethods; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x68
}
