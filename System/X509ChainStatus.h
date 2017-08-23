#pragma once

#include "..\System\Security\Cryptography\X509Certificates\X509ChainStatusFlags.h"
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
	class X509ChainStatus : public ValueType // 0x0
	{
	public:
		System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::UnicodeString* info; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x20
}
