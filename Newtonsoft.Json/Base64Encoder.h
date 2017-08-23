#pragma once

#include "..\System\Char.h"
#include "..\System\IO\TextWriter.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Utilities
{
	class Base64Encoder : public Object // 0x0
	{
	public:
		System::Char* _charsLine; // 0x10 (size: 0x8, flags: 0x21, type: 0x1d)
		System::IO::TextWriter* _writer; // 0x18 (size: 0x8, flags: 0x21, type: 0x12)
		unsigned char* _leftOverBytes; // 0x20 (size: 0x8, flags: 0x1, type: 0x1d)
		int _leftOverBytesCount; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
