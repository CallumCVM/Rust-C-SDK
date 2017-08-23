#pragma once

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class DHParameters : public ValueType // 0x0
	{
	public:
		unsigned char* P; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* G; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		unsigned char* X; // 0x20 (size: 0x8, flags: 0x86, type: 0x1d)
	}; // size = 0x28
}
