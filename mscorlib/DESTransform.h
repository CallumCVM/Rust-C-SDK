#pragma once

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class DESTransform : public SymmetricTransform // 0x58
	{
	public:
		unsigned char* keySchedule; // 0x58 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* byteBuff; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned int* dwordBuff; // 0x68 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x70
}
