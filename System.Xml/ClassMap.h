#pragma once

#include "..\System\Collections\Hashtable.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\Serialization\XmlTypeMapMemberAttribute.h"
#include "..\System\Xml\Serialization\XmlTypeMapElementInfo.h"
#include "..\System\Xml\Serialization\XmlTypeMapMemberAnyElement.h"
#include "..\System\Xml\Serialization\XmlTypeMapMemberAnyAttribute.h"
#include "..\System\Xml\Serialization\XmlTypeMapMemberNamespaces.h"
#include "..\System\Xml\Serialization\XmlTypeMapMember.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class ClassMap : public ObjectMap // 0x0
	{
	public:
		System::Collections::Hashtable* _elements; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _elementMembers; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Hashtable* _attributeMembers; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapMemberAttribute* _attributeMembersArray; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Xml::Serialization::XmlTypeMapElementInfo* _elementsByIndex; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Collections::ArrayList* _flatLists; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _allMembers; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _membersWithDefault; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* _listMembers; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapMemberAnyElement* _defaultAnyElement; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapMemberAnyAttribute* _defaultAnyAttribute; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapMemberNamespaces* _namespaceDeclarations; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapMember* _xmlTextCollector; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapMember* _returnMember; // 0x78 (size: 0x8, flags: 0x1, type: 0x12)
		bool _ignoreMemberNamespace; // 0x80 (size: 0x1, flags: 0x1, type: 0x2)
		bool _canBeSimpleType; // 0x81 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x88
}
