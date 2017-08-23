#pragma once

#include "..\Mono\Security\PKCS7\SignedData.h"

namespace Mono
{
	namespace Security
{
{
		namespace Authenticode
{
	class SoftwarePublisherCertificate : public Object // 0x0
	{
	public:
		Mono::Security::PKCS7::SignedData* pkcs7; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
