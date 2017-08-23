#pragma once

#include "..\System\Xml\Serialization\XmlTypeMapElementInfoList.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\TypeData.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlTypeMapMemberElement : public XmlTypeMapMember // 0x50
	{
	public:
		System::Xml::Serialization::XmlTypeMapElementInfoList* _elementInfo; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _choiceMember; // 0x58 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::TypeData* _choiceTypeData; // 0x60 (size: 0x8, flags: 0x1, type: 0x12)
		bool _isTextCollector; // 0x68 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x70
}
