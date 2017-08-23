#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\List.h"

namespace System
{
	namespace Xml
{
	class XmlDictionary : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<UnityEngine::UnicodeString*,System.Xml.XmlDictionaryString> dict; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<System.Xml.XmlDictionaryString>* list; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		bool is_readonly; // 0x20 (size: 0x1, flags: 0x21, type: 0x2)
	}; // size = 0x28
}
