#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\TypeData.h"
#include "..\System\Xml\Serialization\XmlTypeMapping.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlTypeMapping : public XmlMapping // 0x48
	{
	public:
		UnityEngine::UnicodeString* xmlType; // 0x48 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* xmlTypeNamespace; // 0x50 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::TypeData* type; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapping* baseMap; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* documentation; // 0x68 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* _derivedTypes; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		bool multiReferenceType; // 0x78 (size: 0x1, flags: 0x1, type: 0x2)
		bool isSimpleType; // 0x79 (size: 0x1, flags: 0x1, type: 0x2)
		bool includeInSchema; // 0x7a (size: 0x1, flags: 0x1, type: 0x2)
		bool isNullable; // 0x7b (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
