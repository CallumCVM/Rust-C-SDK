#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\ASN1.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
	class SafeBag : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _bagOID; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Security::ASN1* _asn1; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
