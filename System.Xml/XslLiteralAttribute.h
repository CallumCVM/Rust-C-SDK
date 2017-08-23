#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Mono\Xml\Xsl\Operations\XslAvt.h"

namespace rust 
{
	class XslLiteralAttribute : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* localname; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* prefix; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* nsUri; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		Mono::Xml::Xsl::Operations::XslAvt* val; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
