#pragma once

#include "..\System\Type.h"
#include "..\System\Xml\XmlQualifiedName.h"
#include "..\System\Reflection\MethodInfo.h"

namespace System
{
	namespace Runtime
{
{
		namespace Serialization
{
	class CollectionTypeMap : public SerializationMap // 0x48
	{
	public:
		System::Type* element_type; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::XmlQualifiedName* element_qname; // 0x50 (size: 0x8, flags: 0x3, type: 0x12)
		System::Reflection::MethodInfo* add_method; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x60
}
