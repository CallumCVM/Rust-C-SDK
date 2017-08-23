#pragma once

#include "..\System\Runtime\Serialization\KnownTypeCollection.h"
#include "..\System\Type.h"
#include "..\UnityEngine\List.h"
#include "..\System\Xml\Schema\XmlSchemaSet.h"
#include "..\System\Collections\Generic\Dictionary<System\Type,System\Xml\XmlQualifiedName>.h"
#include "..\System\Xml\XmlQualifiedName.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class SerializationMap : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::KnownTypeCollection* KnownTypes; // 0x10 (size: 0x8, flags: 0x26, type: 0x12)
		System::Type* RuntimeType; // 0x18 (size: 0x8, flags: 0x26, type: 0x12)
		UnityEngine::List<System.Runtime.Serialization.DataMemberInfo>* Members; // 0x20 (size: 0x8, flags: 0x6, type: 0x15)
		System::Xml::Schema::XmlSchemaSet* schema_set; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Generic::Dictionary<System::Type,System::Xml::XmlQualifiedName> qname_table; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System::Xml::XmlQualifiedName* <XmlName>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		bool IsReference; // 0x40 (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x48
}
