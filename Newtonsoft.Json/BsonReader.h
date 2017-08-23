#pragma once

#include "..\System\IO\BinaryReader.h"
#include "..\UnityEngine\List.h"
#include "..\System\Char.h"
#include "..\Newtonsoft\Json\Bson\BsonType.h"
#include "..\Newtonsoft\Json\Bson\BsonReader\BsonReaderState.h"
#include "..\Newtonsoft\Json\Bson\BsonReader\ContainerContext.h"
#include "..\System\DateTimeKind.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Bson
{
	class BsonReader : public JsonReader // 0x70
	{
	public:
		System::IO::BinaryReader* _reader; // 0x70 (size: 0x8, flags: 0x21, type: 0x12)
		UnityEngine::List<Newtonsoft.Json.Bson.BsonReader.ContainerContext>* _stack; // 0x78 (size: 0x8, flags: 0x21, type: 0x15)
		unsigned char* _byteBuffer; // 0x80 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Char* _charBuffer; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		Newtonsoft::Json::Bson::BsonReader::ContainerContext* _currentContext; // 0x90 (size: 0x8, flags: 0x1, type: 0x12)
		Newtonsoft::Json::Bson::BsonType _currentElementType; // 0x98 (size: 0x1, flags: 0x1, type: 0x11)
		Newtonsoft::Json::Bson::BsonReader::BsonReaderState _bsonReaderState; // 0x9c (size: 0x4, flags: 0x1, type: 0x11)
		bool _readRootValueAsArray; // 0xa0 (size: 0x1, flags: 0x1, type: 0x2)
		bool _jsonNet35BinaryCompatibility; // 0xa1 (size: 0x1, flags: 0x1, type: 0x2)
		System::DateTimeKind _dateTimeKindHandling; // 0xa4 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0xa8
}
