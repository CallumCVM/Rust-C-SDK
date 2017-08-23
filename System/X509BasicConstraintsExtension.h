#pragma once

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
	class X509BasicConstraintsExtension : public X509Extension // 0x28
	{
	public:
		bool _certificateAuthority; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
		bool _hasPathLengthConstraint; // 0x29 (size: 0x1, flags: 0x1, type: 0x2)
		int _pathLengthConstraint; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		System::Security::Cryptography::AsnDecodeStatus _status; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x38
}
