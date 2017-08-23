#pragma once

#include "..\System\Xml\XmlNode.h"
#include "..\System\Xml\XmlNodeChangedAction.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
	class XmlNodeChangedEventArgs : public EventArgs // 0x0
	{
	public:
		System::Xml::XmlNode* _oldParent; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* _newParent; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlNode* _node; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _oldValue; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* _newValue; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlNodeChangedAction _action; // 0x38 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x40
}
