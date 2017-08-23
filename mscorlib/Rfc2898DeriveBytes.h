#pragma once

#include "..\System\Security\Cryptography\HMACSHA1.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class Rfc2898DeriveBytes : public DeriveBytes // 0x0
	{
	public:
		int _iteration; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		unsigned char* _salt; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Security::Cryptography::HMACSHA1* _hmac; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* _buffer; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		int _pos; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int _f; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x38
}
