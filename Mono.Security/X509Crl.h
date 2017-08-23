#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\DateTime.h"
#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Security\X509\X509ExtensionCollection.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
	class X509Crl : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* issuer; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* entries; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* signatureOID; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		unsigned char* signature; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		Mono::Security::X509::X509ExtensionCollection* extensions; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		unsigned char* encoded; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* hash_value; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char version; // 0x48 (size: 0x1, flags: 0x1, type: 0x5)
		System::DateTime thisUpdate; // 0x50 (size: 0x10, flags: 0x1, type: 0x11)
		System::DateTime nextUpdate; // 0x60 (size: 0x10, flags: 0x1, type: 0x11)
	}; // size = 0x70
}
