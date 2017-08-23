#pragma once

#include "..\System\Security\Cryptography\X509Certificates\X509Certificate.h"

namespace System
{
	namespace Security
{
{
		namespace Policy
{
	class PublisherMembershipCondition : public Object // 0x0
	{
	public:
		int version; // 0x10 (size: 0x4, flags: 0x21, type: 0x8)
		System::Security::Cryptography::X509Certificates::X509Certificate* x509; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
