#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class SoapSchemaMember : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* memberName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::XmlQualifiedName* memberType; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
