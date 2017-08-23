#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RSAParameters : public ValueType // 0x0
	{
	public:
		unsigned char* P; // 0x10 (size: 0x8, flags: 0x86, type: 0x1d)
		unsigned char* Q; // 0x18 (size: 0x8, flags: 0x86, type: 0x1d)
		unsigned char* D; // 0x20 (size: 0x8, flags: 0x86, type: 0x1d)
		unsigned char* DP; // 0x28 (size: 0x8, flags: 0x86, type: 0x1d)
		unsigned char* DQ; // 0x30 (size: 0x8, flags: 0x86, type: 0x1d)
		unsigned char* InverseQ; // 0x38 (size: 0x8, flags: 0x86, type: 0x1d)
		unsigned char* Modulus; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* Exponent; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x50
}
