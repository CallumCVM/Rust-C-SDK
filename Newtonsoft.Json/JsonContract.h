#pragma once

#include "..\System\Type.h"
#include "..\Newtonsoft\Json\ReadType.h"
#include "..\Newtonsoft\Json\Serialization\JsonContractType.h"
#include "..\UnityEngine\List.h"
#include "..\System\Collections\Generic\IList<Newtonsoft\Json\Serialization\SerializationCallback>.h"
#include "..\System\Collections\Generic\IList<Newtonsoft\Json\Serialization\SerializationErrorCallback>.h"
#include "..\Newtonsoft\Json\JsonConverter.h"
#include "..\System\Func<System\Object>.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonContract : public Object // 0x0
	{
	public:
		System::Type* NonNullableUnderlyingType; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		UnityEngine::List<Newtonsoft.Json.Serialization.SerializationCallback>* _onDeserializedCallbacks; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IList<Newtonsoft::Json::Serialization::SerializationCallback> _onDeserializingCallbacks; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IList<Newtonsoft::Json::Serialization::SerializationCallback> _onSerializedCallbacks; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IList<Newtonsoft::Json::Serialization::SerializationCallback> _onSerializingCallbacks; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		System::Collections::Generic::IList<Newtonsoft::Json::Serialization::SerializationErrorCallback> _onErrorCallbacks; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		System::Type* _createdType; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
		System::Type* <UnderlyingType>k__BackingField; // 0x48 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::JsonConverter* <Converter>k__BackingField; // 0x50 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::JsonConverter* <InternalConverter>k__BackingField; // 0x58 (size: 0x8, flags: 0x1, type: 0x12)
		System::Func<System::Object> <DefaultCreator>k__BackingField; // 0x60 (size: 0x8, flags: 0x1, type: 0x15)
		bool IsNullable; // 0x68 (size: 0x1, flags: 0x3, type: 0x2)
		bool IsConvertable; // 0x69 (size: 0x1, flags: 0x3, type: 0x2)
		bool IsEnum; // 0x6a (size: 0x1, flags: 0x3, type: 0x2)
		Newtonsoft::Json::ReadType InternalReadType; // 0x6c (size: 0x4, flags: 0x3, type: 0x11)
		Newtonsoft::Json::Serialization::JsonContractType ContractType; // 0x70 (size: 0x4, flags: 0x3, type: 0x11)
		bool IsReadOnlyOrFixedSize; // 0x74 (size: 0x1, flags: 0x3, type: 0x2)
		bool IsSealed; // 0x75 (size: 0x1, flags: 0x3, type: 0x2)
		bool IsInstantiable; // 0x76 (size: 0x1, flags: 0x3, type: 0x2)
		System.Nullable<bool> <IsReference>k__BackingField; // 0x77 (size: 0x2, flags: 0x1, type: 0x15)
		bool <DefaultCreatorNonPublic>k__BackingField; // 0x79 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x80
}
