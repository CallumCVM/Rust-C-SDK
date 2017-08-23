#pragma once

#include "..\System\Xml\Linq\XName.h"
#include "..\UnityEngine\List.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XStreamingElement : public Object // 0x0
	{
	public:
		System::Xml::Linq::XName* name; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::List<System.Object>* contents; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
