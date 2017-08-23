#pragma once

#include "..\System\Security\Cryptography\X509Certificates\X509KeyUsageFlags.h"
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
	class X509KeyUsageExtension : public X509Extension // 0x28
	{
	public:
		System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _keyUsages; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		System::Security::Cryptography::AsnDecodeStatus _status; // 0x2c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
