#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Security\X509\X509CertificateCollection.h"
#include "..\System\Collections\ArrayList.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
	class X509Store : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _storePath; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Security::X509::X509CertificateCollection* _certificates; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _crls; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		bool _crl; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x38
}
