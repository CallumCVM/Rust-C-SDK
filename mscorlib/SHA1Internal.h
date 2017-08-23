#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class SHA1Internal : public Object // 0x0
	{
	public:
		unsigned int* _H; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned __int64 count; // 0x18 (size: 0x8, flags: 0x1, type: 0xb)
		unsigned char* _ProcessingBuffer; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int _ProcessingBufferCount; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned int* buff; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x38
}
