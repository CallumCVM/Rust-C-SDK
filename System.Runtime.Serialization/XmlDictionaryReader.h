#pragma once

#include "..\System\Xml\XmlDictionaryReaderQuotas.h"
#include "..\System\Reflection\MethodInfo.h"

namespace System
{
	namespace Xml
{
	class XmlDictionaryReader : public XmlReader // 0x28
	{
	public:
		System::Xml::XmlDictionaryReaderQuotas* quotas; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* xmlconv_from_bin_hex; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
