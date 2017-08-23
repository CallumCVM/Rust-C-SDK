#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Security\ASN1.h"

namespace Mono
{
	namespace Security
{
{
		namespace X509
{
{
{
			namespace Extensions
{
	class GeneralNames : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* rfc822Name; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* dnsName; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* directoryNames; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* uris; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* ipAddr; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::ASN1* asn; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
