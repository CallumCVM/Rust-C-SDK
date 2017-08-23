#pragma once

#include "..\Mono\Security\Protocol\Tls\CipherSuite.h"

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
	class SecurityParameters : public Object // 0x0
	{
	public:
		Mono::Security::Protocol::Tls::CipherSuite* cipher; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* clientWriteMAC; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* serverWriteMAC; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x28
}
