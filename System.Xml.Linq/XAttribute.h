#pragma once

#include "..\System\Xml\Linq\XName.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Linq\XAttribute.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XAttribute : public XObject // 0x40
	{
	public:
		System::Xml::Linq::XName* name; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* value; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Linq::XAttribute* next; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Linq::XAttribute* previous; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
