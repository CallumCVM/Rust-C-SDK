#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Xml\Serialization\XmlAttributeOverrides.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\Serialization\ReflectionHelper.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class XmlReflectionImporter : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* initialDefaultNamespace; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* includedTypes; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::ReflectionHelper* helper; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* relatedMaps; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		int arrayChoiceCount; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool allowPrivateTypes; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
