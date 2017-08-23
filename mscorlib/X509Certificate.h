#pragma once

#include "..\Mono\Security\X509\X509Certificate.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Security
{
{
		namespace Cryptography
{
{
{
			namespace X509Certificates
{
	class X509Certificate : public Object // 0x0
	{
	public:
		Mono::Security::X509::X509Certificate* x509; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		bool hideDates; // 0x18 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned char* cachedCertificateHash; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* issuer_name; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* subject_name; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x38
}
