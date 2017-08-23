#pragma once

#include "..\Newtonsoft\Json\MemberSerialization.h"
#include "..\System\Nullable<Newtonsoft\Json\Required>.h"
#include "..\Newtonsoft\Json\Serialization\JsonPropertyCollection.h"
#include "..\Newtonsoft\Json\Serialization\ExtensionDataSetter.h"
#include "..\Newtonsoft\Json\Serialization\ExtensionDataGetter.h"
#include "..\System\Reflection\ConstructorInfo.h"
#include "..\Newtonsoft\Json\Serialization\ObjectConstructor<System\Object>.h"
#include "..\System\Type.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonObjectContract : public JsonContainerContract // 0xb0
	{
	public:
		Newtonsoft::Json::Serialization::JsonPropertyCollection* <Properties>k__BackingField; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::ExtensionDataSetter* <ExtensionDataSetter>k__BackingField; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::ExtensionDataGetter* <ExtensionDataGetter>k__BackingField; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::ConstructorInfo* _parametrizedConstructor; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Reflection::ConstructorInfo* _overrideConstructor; // 0xd0 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::ObjectConstructor<System::Object> _overrideCreator; // 0xd8 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::Serialization::ObjectConstructor<System::Object> _parameterizedCreator; // 0xe0 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::Serialization::JsonPropertyCollection* _creatorParameters; // 0xe8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _extensionDataValueType; // 0xf0 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::MemberSerialization <MemberSerialization>k__BackingField; // 0xf8 (size: 0x4, flags: 0x1, type: 0x11)
		System::Nullable<Newtonsoft::Json::Required> <ItemRequired>k__BackingField; // 0xfc (size: 0x8, flags: 0x1, type: 0x15)
		bool ExtensionDataIsJToken; // 0x104 (size: 0x1, flags: 0x3, type: 0x2)
		System.Nullable<bool> _hasRequiredOrDefaultValueProperties; // 0x105 (size: 0x2, flags: 0x1, type: 0x15)
	}; // size = 0x108
}
