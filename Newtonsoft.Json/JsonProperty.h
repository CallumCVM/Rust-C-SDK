#pragma once

#include "..\System\Nullable<Newtonsoft\Json\Required>.h"
#include "..\System\Object.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Type.h"
#include "..\Newtonsoft\Json\Serialization\JsonContract.h"
#include "..\Newtonsoft\Json\Serialization\IValueProvider.h"
#include "..\Newtonsoft\Json\Serialization\IAttributeProvider.h"
#include "..\Newtonsoft\Json\JsonConverter.h"
#include "..\System\Nullable<Newtonsoft\Json\NullValueHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\DefaultValueHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\ReferenceLoopHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\ObjectCreationHandling>.h"
#include "..\System\Nullable<Newtonsoft\Json\TypeNameHandling>.h"
#include "..\System\Predicate<System\Object>.h"
#include "..\System\Action<System\Object,System\Object>.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonProperty : public Object // 0x0
	{
	public:
		System::Object _defaultValue; // 0x10 (size: 0x8, flags: 0x1, type: 0x1c)
		UnityEngine::UnicodeString* _propertyName; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Type* _propertyType; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::JsonContract* <PropertyContract>k__BackingField; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* <DeclaringType>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* <UnderlyingName>k__BackingField; // 0x38 (size: 0x8, flags: 0x1, type: 0xe)
		Newtonsoft::Json::Serialization::IValueProvider* <ValueProvider>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Serialization::IAttributeProvider* <AttributeProvider>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::JsonConverter* <Converter>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::JsonConverter* <MemberConverter>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Predicate<System::Object> <ShouldSerialize>k__BackingField; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		System::Predicate<System::Object> <ShouldDeserialize>k__BackingField; // 0x68 (size: 0x8, flags: 0x1, type: 0x15)
		System::Predicate<System::Object> <GetIsSpecified>k__BackingField; // 0x70 (size: 0x8, flags: 0x1, type: 0x15)
		System::Action<System::Object,System::Object> <SetIsSpecified>k__BackingField; // 0x78 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::JsonConverter* <ItemConverter>k__BackingField; // 0x80 (size: 0x8, flags: 0x1, type: 0x12)
		System::Nullable<Newtonsoft::Json::Required> _required; // 0x88 (size: 0x8, flags: 0x3, type: 0x15)
		bool _hasExplicitDefaultValue; // 0x90 (size: 0x1, flags: 0x3, type: 0x2)
		bool _hasGeneratedDefaultValue; // 0x91 (size: 0x1, flags: 0x1, type: 0x2)
		bool _skipPropertyNameEscape; // 0x92 (size: 0x1, flags: 0x3, type: 0x2)
		System.Nullable<int> <Order>k__BackingField; // 0x94 (size: 0x8, flags: 0x1, type: 0x15)
		bool <Ignored>k__BackingField; // 0x9c (size: 0x1, flags: 0x1, type: 0x2)
		bool <Readable>k__BackingField; // 0x9d (size: 0x1, flags: 0x1, type: 0x2)
		bool <Writable>k__BackingField; // 0x9e (size: 0x1, flags: 0x1, type: 0x2)
		bool <HasMemberAttribute>k__BackingField; // 0x9f (size: 0x1, flags: 0x1, type: 0x2)
		System.Nullable<bool> <IsReference>k__BackingField; // 0xa0 (size: 0x2, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::NullValueHandling> <NullValueHandling>k__BackingField; // 0xa4 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::DefaultValueHandling> <DefaultValueHandling>k__BackingField; // 0xac (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::ReferenceLoopHandling> <ReferenceLoopHandling>k__BackingField; // 0xb4 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::ObjectCreationHandling> <ObjectCreationHandling>k__BackingField; // 0xbc (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::TypeNameHandling> <TypeNameHandling>k__BackingField; // 0xc4 (size: 0x8, flags: 0x1, type: 0x15)
		System.Nullable<bool> <ItemIsReference>k__BackingField; // 0xcc (size: 0x2, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::TypeNameHandling> <ItemTypeNameHandling>k__BackingField; // 0xd0 (size: 0x8, flags: 0x1, type: 0x15)
		System::Nullable<Newtonsoft::Json::ReferenceLoopHandling> <ItemReferenceLoopHandling>k__BackingField; // 0xd8 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0xe0
}
