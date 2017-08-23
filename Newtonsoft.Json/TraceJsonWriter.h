#pragma once

#include "..\Newtonsoft\Json\JsonWriter.h"
#include "..\Newtonsoft\Json\JsonTextWriter.h"
#include "..\System\IO\StringWriter.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class TraceJsonWriter : public JsonWriter // 0x60
	{
	public:
		Newtonsoft::Json::JsonWriter* _innerWriter; // 0x60 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::JsonTextWriter* _textWriter; // 0x68 (size: 0x8, flags: 0x21, type: 0x12)
		System::IO::StringWriter* _sw; // 0x70 (size: 0x8, flags: 0x21, type: 0x12)
	}; // size = 0x78
}
