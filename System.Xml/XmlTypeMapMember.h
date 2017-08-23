#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\TypeData.h"
#include "..\System\Reflection\MemberInfo.h"
#include "..\System\Object.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlTypeMapMember : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* _name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::TypeData* _typeData; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MemberInfo* _member; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::MemberInfo* _specifiedMember; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object _defaultValue; // 0x30 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* documentation; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		int _index; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
		int _globalIndex; // 0x44 (size: 0x4, flags: 0x1, type: 0x8)
		int _flags; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x50
}
