#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Security\Cryptography\X509Certificates\StoreLocation.h"
#include "..\System\Security\Cryptography\X509Certificates\X509Certificate2Collection.h"
#include "..\System\Security\Cryptography\X509Certificates\OpenFlags.h"
#include "..\Mono\Security\X509\X509Store.h"

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
	class X509Store : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Security::Cryptography::X509Certificates::X509Certificate2Collection* list; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::X509::X509Store* store; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::Cryptography::X509Certificates::StoreLocation _location; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Cryptography::X509Certificates::OpenFlags _flags; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
