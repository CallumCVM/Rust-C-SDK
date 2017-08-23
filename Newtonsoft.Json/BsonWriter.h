#pragma once

#include "..\Newtonsoft\Json\Bson\BsonBinaryWriter.h"
#include "..\Newtonsoft\Json\Bson\BsonToken.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Bson
{
	class BsonWriter : public JsonWriter // 0x60
	{
	public:
		Newtonsoft::Json::Bson::BsonBinaryWriter* _writer; // 0x60 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::Bson::BsonToken* _root; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Bson::BsonToken* _parent; // 0x70 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* _propertyName; // 0x78 (size: 0x8, flags: 0x1, type: 0xe)
	}; // size = 0x80
}
