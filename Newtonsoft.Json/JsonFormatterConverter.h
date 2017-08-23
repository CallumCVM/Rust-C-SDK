#pragma once

#include "..\Newtonsoft\Json\Serialization\JsonSerializerInternalReader.h"
#include "..\Newtonsoft\Json\Serialization\JsonISerializableContract.h"
#include "..\Newtonsoft\Json\Serialization\JsonProperty.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonFormatterConverter : public Object // 0x0
	{
	public:
		Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _reader; // 0x10 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::Serialization::JsonISerializableContract* _contract; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::Serialization::JsonProperty* _member; // 0x20 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x28
}
