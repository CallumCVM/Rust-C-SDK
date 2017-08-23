#pragma once

#include "..\System\Security\Cryptography\DSA.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
	class DSASignatureFormatter : public AsymmetricSignatureFormatter // 0x0
	{
	public:
		System::Security::Cryptography::DSA* dsa; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
