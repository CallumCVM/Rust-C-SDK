#pragma once

#include "..\System\Net\WebHeaderCollection.h"
#include "..\System\Net\ChunkStream\State.h"
#include "..\System\Text\StringBuilder.h"
#include "..\System\Collections\ArrayList.h"

namespace System
{
	namespace Net
{
	class ChunkStream : public Object // 0x0
	{
	public:
		System::Net::WebHeaderCollection* headers; // 0x10 (size: 0x8, flags: 0x3, type: 0x12)
		System::Text::StringBuilder* saved; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::ArrayList* chunks; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int chunkSize; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int chunkRead; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		System::Net::ChunkStream::State state; // 0x30 (size: 0x4, flags: 0x1, type: 0x11)
		bool sawCR; // 0x34 (size: 0x1, flags: 0x1, type: 0x2)
		bool gotit; // 0x35 (size: 0x1, flags: 0x1, type: 0x2)
		int trailerState; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
