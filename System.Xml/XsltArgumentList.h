#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Xml\Xsl\XsltMessageEncounteredEventHandler.h"

namespace System
{
	namespace Xml
{
{
		namespace Xsl
{
	class XsltArgumentList : public Object // 0x0
	{
	public:
		System::Collections::Hashtable* extensionObjects; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::Collections::Hashtable* parameters; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		System::Xml::Xsl::XsltMessageEncounteredEventHandler* XsltMessageEncountered; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
