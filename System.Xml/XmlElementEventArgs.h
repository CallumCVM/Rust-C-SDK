#pragma once

#include "..\System\Xml\XmlElement.h"
#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlElementEventArgs : public EventArgs // 0x0
	{
	public:
		System::Xml::XmlElement* attr; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object obj; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* expectedElements; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		int lineNumber; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int linePosition; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
