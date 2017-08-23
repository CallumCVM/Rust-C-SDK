#pragma once

#include "..\System\Net\ICredentials.h"

namespace System
{
	namespace Xml
{
	class XmlUrlResolver : public XmlResolver // 0x0
	{
	public:
		System::Net::ICredentials* credential; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x18
}
