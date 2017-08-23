#pragma once

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class SHA224Managed : public SHA224 // 0x28
	{
	public:
		unsigned int* _H; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _ProcessingBuffer; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned __int64 count; // 0x38 (size: 0x8, flags: 0x1, type: 0xb)
		int _ProcessingBufferCount; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
