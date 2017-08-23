#pragma once

#include "..\UnityEngine\List.h"
#include "..\WebSocketSharp\Net\WebHeaderCollection.h"
#include "..\System\Text\StringBuilder.h"
#include "..\WebSocketSharp\Net\InputChunkState.h"

namespace WebSocketSharp
{
	namespace Net
{
	class ChunkStream : public Object // 0x0
	{
	public:
		UnityEngine::List<WebSocketSharp.Net.Chunk>* _chunks; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		WebSocketSharp::Net::WebHeaderCollection* _headers; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Text::StringBuilder* _saved; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int _chunkRead; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
		int _chunkSize; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		bool _gotIt; // 0x30 (size: 0x1, flags: 0x1, type: 0x2)
		bool _sawCr; // 0x31 (size: 0x1, flags: 0x1, type: 0x2)
		WebSocketSharp::Net::InputChunkState _state; // 0x34 (size: 0x4, flags: 0x1, type: 0x11)
		int _trailerState; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
