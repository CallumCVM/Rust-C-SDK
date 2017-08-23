#pragma once

#include "..\System\IO\TextReader.h"
#include "..\System\Char.h"
#include "..\Newtonsoft\Json\Utilities\StringBuffer.h"
#include "..\Newtonsoft\Json\Utilities\StringReference.h"
#include "..\Newtonsoft\Json\IArrayPool<System\Char>.h"
#include "..\Newtonsoft\Json\Utilities\PropertyNameTable.h"

namespace Newtonsoft
{
	namespace Json
{
	class JsonTextReader : public JsonReader // 0x70
	{
	public:
		System::IO::TextReader* _reader; // 0x70 (size: 0x8, flags: 0x21, type: 0x12)
		System::Char* _chars; // 0x78 (size: 0x8, flags: 0x1, type: 0x1d)
		Newtonsoft::Json::Utilities::StringBuffer _stringBuffer; // 0x80 (size: 0x10, flags: 0x1, type: 0x11)
		Newtonsoft::Json::Utilities::StringReference _stringReference; // 0x90 (size: 0x10, flags: 0x1, type: 0x11)
		Newtonsoft::Json::IArrayPool<System::Char> _arrayPool; // 0xa0 (size: 0x8, flags: 0x1, type: 0x15)
		Newtonsoft::Json::Utilities::PropertyNameTable* NameTable; // 0xa8 (size: 0x8, flags: 0x3, type: 0x12)
		int _charsUsed; // 0xb0 (size: 0x4, flags: 0x1, type: 0x8)
		int _charPos; // 0xb4 (size: 0x4, flags: 0x1, type: 0x8)
		int _lineStartPos; // 0xb8 (size: 0x4, flags: 0x1, type: 0x8)
		int _lineNumber; // 0xbc (size: 0x4, flags: 0x1, type: 0x8)
		bool _isEndOfFile; // 0xc0 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0xc8
}
