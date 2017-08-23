#pragma once

#include "..\System\Security\Cryptography\TripleDES.h"
#include "..\Mono\Security\Cryptography\MACAlgorithm.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class MACTripleDES : public KeyedHashAlgorithm // 0x30
	{
	public:
		System::Security::Cryptography::TripleDES* tdes; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Cryptography::MACAlgorithm* mac; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool m_disposed; // 0x40 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x48
}
