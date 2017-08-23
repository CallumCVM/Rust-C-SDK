#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RIPEMD160Managed : public RIPEMD160 // 0x28
	{
	public:
		unsigned char* _ProcessingBuffer; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int* _X; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int* _HashValue; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned __int64 _Length; // 0x40 (size: 0x8, flags: 0x1, type: 0xb)
		int _ProcessingBufferCount; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
