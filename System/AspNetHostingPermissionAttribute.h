#pragma once

#include "..\System\Web\AspNetHostingPermissionLevel.h"

namespace System
{
	namespace Web
{
	class AspNetHostingPermissionAttribute : public CodeAccessSecurityAttribute // 0x18
	{
	public:
		System::Web::AspNetHostingPermissionLevel _level; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
