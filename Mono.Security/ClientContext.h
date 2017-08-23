#pragma once

#include "..\Mono\Security\Protocol\Tls\SslClientStream.h"
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
	class ClientContext : public Context // 0xd8
	{
	public:
		Mono::Security::Protocol::Tls::SslClientStream* sslStream; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Int16 clientHelloProtocol; // 0xe0 (size: 0x2, flags: 0x1, type: 0x6)
	}; // size = 0xe8
}
