#pragma once

#include "..\System\IO\MemoryStream.h"

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
	class TlsStream : public Stream // 0x18
	{
	public:
		System::IO::MemoryStream* buffer; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* temp; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		bool canRead; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool canWrite; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
