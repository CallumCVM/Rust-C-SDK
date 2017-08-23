#pragma once

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class ARC4Managed : public RC4 // 0x50
	{
	public:
		unsigned char* key; // 0x50 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* state; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char x; // 0x60 (size: 0x1, flags: 0x1, type: 0x5)
		unsigned char y; // 0x61 (size: 0x1, flags: 0x1, type: 0x5)
		bool m_disposed; // 0x62 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x68
}
