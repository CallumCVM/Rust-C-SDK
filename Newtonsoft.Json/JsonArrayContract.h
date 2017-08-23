#pragma once

#include "..\System\Type.h"
#include "..\Newtonsoft\Json\Serialization\ObjectConstructor<System\Object>.h"
#include "..\System\Func<System\Object>.h"
#include "..\System\Reflection\ConstructorInfo.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonArrayContract : public JsonContainerContract // 0xb0
	{
	public:
		System::Type* <CollectionItemType>k__BackingField; // 0xb0 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _genericCollectionDefinitionType; // 0xb8 (size: 0x8, flags: 0x21, type: 0x12)
		System::Type* _genericWrapperType; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::ObjectConstructor<System::Object> _genericWrapperCreator; // 0xc8 (size: 0x8, flags: 0x1, type: 0x15)
		System::Func<System::Object> _genericTemporaryCollectionCreator; // 0xd0 (size: 0x8, flags: 0x1, type: 0x15)
		System::Reflection::ConstructorInfo* _parameterizedConstructor; // 0xd8 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::Serialization::ObjectConstructor<System::Object> _parameterizedCreator; // 0xe0 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::Serialization::ObjectConstructor<System::Object> _overrideCreator; // 0xe8 (size: 0x8, flags: 0x1, type: 0x15)
		bool <IsMultidimensionalArray>k__BackingField; // 0xf0 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsArray>k__BackingField; // 0xf1 (size: 0x1, flags: 0x1, type: 0x2)
		bool <ShouldCreateWrapper>k__BackingField; // 0xf2 (size: 0x1, flags: 0x1, type: 0x2)
		bool <CanDeserialize>k__BackingField; // 0xf3 (size: 0x1, flags: 0x1, type: 0x2)
		bool <HasParameterizedCreator>k__BackingField; // 0xf4 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xf8
}
