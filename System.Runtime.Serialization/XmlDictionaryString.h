#pragma once

#include "..\System\Xml\IXmlDictionary.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlDictionaryString : public Object // 0x0
	{
	public:
		System::Xml::IXmlDictionary* dict; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::UnicodeString* value; // 0x18 (size: 0x8, flags: 0x21, type: 0xe)
		int key; // 0x20 (size: 0x4, flags: 0x21, type: 0x8)
	}; // size = 0x28
}
