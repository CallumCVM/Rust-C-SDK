#pragma once

#include "..\System\Net\WebPermissionInfoType.h"
#include "..\System\Object.h"

namespace System
{
	namespace Net
{
	class WebPermissionInfo : public Object // 0x0
	{
	public:
		System::Object _info; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Net::WebPermissionInfoType _type; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
