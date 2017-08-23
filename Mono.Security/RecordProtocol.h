#pragma once

#include "..\System\IO\Stream.h"
#include "..\Mono\Security\Protocol\Tls\Context.h"

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
	class RecordProtocol : public Object // 0x0
	{
	public:
		System::IO::Stream* innerStream; // 0x10 (size: 0x8, flags: 0x4, type: 0x12)
		Mono::Security::Protocol::Tls::Context* context; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
	}; // size = 0x20
}
