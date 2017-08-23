#pragma once

#include "..\System\Type.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Reflection\MethodInfo.h"
#include "..\System\Runtime\Serialization\CollectionDataContractAttribute.h"
#include "..\System\Reflection\PropertyInfo.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class DictionaryTypeMap : public SerializationMap // 0x48
	{
	public:
		System::Type* key_type; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* value_type; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* dict_qname; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* item_qname; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* key_qname; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* value_qname; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MethodInfo* add_method; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		System::Runtime::Serialization::CollectionDataContractAttribute* a; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* pair_type; // 0x88 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::PropertyInfo* pair_key_property; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::PropertyInfo* pair_value_property; // 0x98 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0xa0
}
