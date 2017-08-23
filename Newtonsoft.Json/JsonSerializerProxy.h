#pragma once

#include "..\Newtonsoft\Json\Serialization\JsonSerializerInternalReader.h"
#include "..\Newtonsoft\Json\Serialization\JsonSerializerInternalWriter.h"
#include "..\Newtonsoft\Json\JsonSerializer.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class JsonSerializerProxy : public JsonSerializer // 0xd8
	{
	public:
		Newtonsoft::Json::Serialization::JsonSerializerInternalReader* _serializerReader; // 0xd8 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::Serialization::JsonSerializerInternalWriter* _serializerWriter; // 0xe0 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::JsonSerializer* _serializer; // 0xe8 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0xf0
}
