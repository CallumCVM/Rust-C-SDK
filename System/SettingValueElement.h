#pragma once

#include "..\System\Xml\XmlNode.h"

namespace System
{
	namespace Configuration
{
	class SettingValueElement : public ConfigurationElement // 0x70
	{
	public:
		System::Xml::XmlNode* node; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x78
}
