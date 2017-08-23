#pragma once

#include "..\System\Object.h"

namespace System
{
	namespace Net
{
	class WebPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Object m_accept; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Object m_connect; // 0x20 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x28
}
