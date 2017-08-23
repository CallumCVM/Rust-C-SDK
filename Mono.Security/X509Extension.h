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
	class X509Extension : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* extnOid; // 0x10 (size: 0x8, flags: 0x4, type: 0xe)
		Mono::Security::ASN1* extnValue; // 0x18 (size: 0x8, flags: 0x4, type: 0x12)
		bool extnCritical; // 0x20 (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x28
}
