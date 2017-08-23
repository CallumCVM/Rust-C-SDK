#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class HashAlgorithm : public Object // 0x0
	{
	public:
		unsigned char* HashValue; // 0x10 (size: 0x8, flags: 0x5, type: 0x1d)
		int HashSizeValue; // 0x18 (size: 0x4, flags: 0x4, type: 0x8)
		int State; // 0x1c (size: 0x4, flags: 0x4, type: 0x8)
		bool disposed; // 0x20 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
