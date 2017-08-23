#pragma once

#include "..\System\Collections\ArrayList.h"
#include "..\Mono\Security\Protocol\Tls\SecurityProtocolType.h"

namespace Mono
{
	namespace Security
{
{
		namespace Protocol
{
{
{
			namespace Tls
{
	class CipherSuiteCollection : public Object // 0x0
	{
	public:
		System::Collections::ArrayList* cipherSuites; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		Mono::Security::Protocol::Tls::SecurityProtocolType protocol; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
