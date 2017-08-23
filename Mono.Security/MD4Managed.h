#pragma once

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class MD4Managed : public MD4 // 0x28
	{
	public:
		unsigned int* state; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* buffer; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int* count; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int* x; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* digest; // 0x48 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x50
}
