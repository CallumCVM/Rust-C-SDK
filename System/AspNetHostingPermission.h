#pragma once

#include "..\System\Web\AspNetHostingPermissionLevel.h"

namespace System
{
	namespace Web
{
	class AspNetHostingPermission : public CodeAccessPermission // 0x0
	{
	public:
		System::Web::AspNetHostingPermissionLevel _level; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
