#pragma once

#include "..\Mono\Security\Protocol\Ntlm\MessageBase.h"

namespace Mono
{
	namespace Http
{
	class NtlmSession : public Object // 0x0
	{
	public:
		Mono::Security::Protocol::Ntlm::MessageBase* message; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
