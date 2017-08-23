#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Linq\XNamespace.h"

namespace System
{
	namespace Xml
{
{
		namespace Linq
{
	class XName : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* local; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Linq::XNamespace* ns; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
