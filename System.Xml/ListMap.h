#pragma once

#include "..\System\Xml\Serialization\XmlTypeMapElementInfoList.h"
#include "..\System\Xml\Serialization\XmlTypeMapping.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class ListMap : public ObjectMap // 0x0
	{
	public:
		System::Xml::Serialization::XmlTypeMapElementInfoList* _itemInfo; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::XmlTypeMapping* _nestedArrayMapping; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _choiceMember; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		bool _gotNestedMapping; // 0x28 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x30
}
