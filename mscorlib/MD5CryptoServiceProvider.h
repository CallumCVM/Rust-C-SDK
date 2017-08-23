#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class MD5CryptoServiceProvider : public MD5 // 0x28
	{
	public:
		unsigned int* _H; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int* buff; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned __int64 count; // 0x38 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned char* _ProcessingBuffer; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		int _ProcessingBufferCount; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
