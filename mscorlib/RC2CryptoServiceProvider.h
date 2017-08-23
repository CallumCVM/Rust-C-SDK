#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RC2CryptoServiceProvider : public RC2 // 0x58
	{
	public:
		bool _useSalt; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
