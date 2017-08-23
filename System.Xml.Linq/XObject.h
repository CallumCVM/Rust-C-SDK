#pragma once

#include "..\System\Xml\Linq\XContainer.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\EventHandler<System\Xml\Linq\XObjectChangeEventArgs>.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XObject : public Object // 0x0
	{
	public:
		System::Xml::Linq::XContainer* owner; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<System.Object>* annotations; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::UnicodeString* baseuri; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::EventHandler<System::Xml::Linq::XObjectChangeEventArgs> Changing; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System::EventHandler<System::Xml::Linq::XObjectChangeEventArgs> Changed; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		int line; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		int column; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
