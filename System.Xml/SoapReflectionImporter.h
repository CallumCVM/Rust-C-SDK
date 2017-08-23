#pragma once

#include "..\System\Xml\Serialization\SoapAttributeOverrides.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Xml\Serialization\ReflectionHelper.h"

namespace System
{
	namespace Xml
{
{
		namespace Serialization
{
	class SoapReflectionImporter : public Object // 0x0
	{
	public:
		System::Xml::Serialization::SoapAttributeOverrides* attributeOverrides; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* initialDefaultNamespace; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* includedTypes; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* relatedMaps; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Xml::Serialization::ReflectionHelper* helper; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
