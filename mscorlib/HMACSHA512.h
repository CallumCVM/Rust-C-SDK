#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class HMACSHA512 : public HMAC // 0x58
	{
	public:
		bool legacy; // 0x58 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x60
}
