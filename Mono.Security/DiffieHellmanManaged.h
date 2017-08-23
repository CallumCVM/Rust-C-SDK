#pragma once

#include "..\Mono\Math\BigInteger.h"

namespace Mono
{
	namespace Security
{
{
		namespace Cryptography
{
	class DiffieHellmanManaged : public DiffieHellman // 0x20
	{
	public:
		Mono::Math::BigInteger* m_P; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* m_G; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Math::BigInteger* m_X; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		bool m_Disposed; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
