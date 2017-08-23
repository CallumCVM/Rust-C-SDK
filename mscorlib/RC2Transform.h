#pragma once

#include "..\System\UInt16.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class RC2Transform : public SymmetricTransform // 0x58
	{
	public:
		System::UInt16 R0; // 0x58 (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 R1; // 0x5a (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 R2; // 0x5c (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16 R3; // 0x5e (size: 0x2, flags: 0x1, type: 0x7)
		System::UInt16* K; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		int j; // 0x68 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x70
}
