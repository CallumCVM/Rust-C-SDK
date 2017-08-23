#pragma once

#include "..\System\Net\Security\AuthenticationLevel.h"

namespace System
{
	namespace Net
{
	class WebRequest : public MarshalByRefObject // 0x18
	{
	public:
		System::Net::Security::AuthenticationLevel authentication_level; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
