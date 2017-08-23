#pragma once

#include "..\System\IO\TextWriter.h"
#include "..\Newtonsoft\Json\Utilities\Base64Encoder.h"
#include "..\System\Char.h"
#include "..\Newtonsoft\Json\IArrayPool<System\Char>.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonTextWriter : public JsonWriter // 0x60
	{
	public:
		System::IO::TextWriter* _writer; // 0x60 (size: 0x8, flags: 0x21, type: 0x12)
		Newtonsoft::Json::Utilities::Base64Encoder* _base64Encoder; // 0x68 (size: 0x8, flags: 0x1, type: 0x12)
		bool* _charEscapeFlags; // 0x70 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Char* _writeBuffer; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		Newtonsoft::Json::IArrayPool<System::Char> _arrayPool; // 0x80 (size: 0x8, flags: 0x1, type: 0x15)
		System::Char* _indentChars; // 0x88 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Char _indentChar; // 0x90 (size: 0x2, flags: 0x1, type: 0x3)
		int _indentation; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
		System::Char _quoteChar; // 0x98 (size: 0x2, flags: 0x1, type: 0x3)
		bool _quoteName; // 0x9a (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xa0
}
