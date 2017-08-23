#pragma once

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class MD2Managed : public MD2 // 0x28
	{
	public:
		unsigned char* state; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* checksum; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* buffer; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* x; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		int count; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
