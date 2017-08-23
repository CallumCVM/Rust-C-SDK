#pragma once

#include "..\System\Net\IAuthenticationModule.h"

namespace System
{
	namespace Net
{
	class NtlmClient : public Object // 0x0
	{
	public:
		System::Net::IAuthenticationModule* authObject; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
