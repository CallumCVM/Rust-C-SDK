#pragma once

#include "..\System\Xml\Serialization\EnumMap\EnumMapMember.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class EnumMap : public ObjectMap // 0x0
	{
	public:
		System::Xml::Serialization::EnumMap::EnumMapMember* _members; // 0x10 (size: 0x8, flags: 0x21, type: 0x1d)
		UnityEngine::UnicodeString** _enumNames; // 0x18 (size: 0x8, flags: 0x21, type: 0x1d)
		UnityEngine::UnicodeString** _xmlNames; // 0x20 (size: 0x8, flags: 0x21, type: 0x1d)
		__int64* _values; // 0x28 (size: 0x8, flags: 0x21, type: 0x1d)
		bool _isFlags; // 0x30 (size: 0x1, flags: 0x21, type: 0x2)
	}; // size = 0x38
}
