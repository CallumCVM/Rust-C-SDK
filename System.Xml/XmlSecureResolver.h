#pragma once

#include "..\System\Xml\XmlResolver.h"
#include "..\System\Security\PermissionSet.h"

namespace System
{
	namespace Xml
{
	class XmlSecureResolver : public XmlResolver // 0x0
	{
	public:
		System::Xml::XmlResolver* resolver; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Security::PermissionSet* permissionSet; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
