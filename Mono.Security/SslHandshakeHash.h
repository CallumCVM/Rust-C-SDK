#pragma once

#include "..\System\Security\Cryptography\HashAlgorithm.h"

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
	class SslHandshakeHash : public HashAlgorithm // 0x28
	{
	public:
		System::Security::Cryptography::HashAlgorithm* md5; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::HashAlgorithm* sha; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* secret; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* innerPadMD5; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* outerPadMD5; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* innerPadSHA; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* outerPadSHA; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		bool hashing; // 0x60 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
