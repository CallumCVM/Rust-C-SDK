#pragma once

#include "..\Newtonsoft\Json\JsonReader.h"
#include "..\Newtonsoft\Json\JsonTextWriter.h"
#include "..\System\IO\StringWriter.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class TraceJsonReader : public JsonReader // 0x70
	{
	public:
		Newtonsoft::Json::JsonReader* _innerReader; // 0x70 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::JsonTextWriter* _textWriter; // 0x78 (size: 0x8, flags: 0x21, type: 0x12)
		System::IO::StringWriter* _sw; // 0x80 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x88
}
