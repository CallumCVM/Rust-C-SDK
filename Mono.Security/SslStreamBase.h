#pragma once

#include "..\System\IO\Stream.h"
#include "..\System\IO\MemoryStream.h"
#include "..\Mono\Security\Protocol\Tls\Context.h"
#include "..\Mono\Security\Protocol\Tls\RecordProtocol.h"
#include "..\System\Object.h"
#include "..\System\Threading\ManualResetEvent.h"

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
	class SslStreamBase : public Stream // 0x18
	{
	public:
		System::IO::Stream* innerStream; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		System::IO::MemoryStream* inputBuffer; // 0x20 (size: 0x8, flags: 0x3, type: 0x12)
		Mono::Security::Protocol::Tls::Context* context; // 0x28 (size: 0x8, flags: 0x3, type: 0x12)
		Mono::Security::Protocol::Tls::RecordProtocol* protocol; // 0x30 (size: 0x8, flags: 0x3, type: 0x12)
		System::Object negotiate; // 0x38 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object read; // 0x40 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object write; // 0x48 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Threading::ManualResetEvent* negotiationComplete; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* recbuf; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		System::IO::MemoryStream* recordStream; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		bool ownsStream; // 0x68 (size: 0x1, flags: 0x3, type: 0x2)
		bool disposed; // 0x69 (size: 0x1, flags: 0x1, type: 0x2)
		bool checkCertRevocationStatus; // 0x6a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
