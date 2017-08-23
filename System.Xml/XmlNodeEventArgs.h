#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlNodeType.h"
#include "..\System\Object.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlNodeEventArgs : public EventArgs // 0x0
	{
	public:
		UnityEngine::UnicodeString* localname; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* nsuri; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::Object source; // 0x28 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* text; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		int linenumber; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int lineposition; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
		System::Xml::XmlNodeType nodetype; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
