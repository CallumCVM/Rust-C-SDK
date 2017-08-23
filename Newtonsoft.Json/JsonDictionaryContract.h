#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\Newtonsoft\Json\Serialization\JsonContract.h"
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
	class JsonDictionaryContract : public JsonContainerContract // 0xb0
	{
	public:
		System.Func<UnityEngine::UnicodeString*,UnityEngine::UnicodeString*> <DictionaryKeyResolver>k__BackingField; // 0xb0 (size: 0x8, flags: 0x1, type: 0x15)
		System::Type* <DictionaryKeyType>k__BackingField; // 0xb8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* <DictionaryValueType>k__BackingField; // 0xc0 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::JsonContract* <KeyContract>k__BackingField; // 0xc8 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* _genericCollectionDefinitionType; // 0xd0 (size: 0x8, flags: 0x21, type: 0x12)
		System::Type* _genericWrapperType; // 0xd8 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::ObjectConstructor<System::Object> _genericWrapperCreator; // 0xe0 (size: 0x8, flags: 0x1, type: 0x15)
		System::Func<System::Object> _genericTemporaryDictionaryCreator; // 0xe8 (size: 0x8, flags: 0x1, type: 0x15)
		System::Reflection::ConstructorInfo* _parameterizedConstructor; // 0xf0 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::Serialization::ObjectConstructor<System::Object> _overrideCreator; // 0xf8 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::Serialization::ObjectConstructor<System::Object> _parameterizedCreator; // 0x100 (size: 0x8, flags: 0x1, type: 0x15)
		bool <ShouldCreateWrapper>k__BackingField; // 0x108 (size: 0x1, flags: 0x1, type: 0x2)
		bool <HasParameterizedCreator>k__BackingField; // 0x109 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x110
}
