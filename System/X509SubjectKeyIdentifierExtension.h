#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\AsnDecodeStatus.h"

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
	class X509SubjectKeyIdentifierExtension : public X509Extension // 0x28
	{
	public:
		unsigned char* _subjectKeyIdentifier; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* _ski; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::AsnDecodeStatus _status; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
