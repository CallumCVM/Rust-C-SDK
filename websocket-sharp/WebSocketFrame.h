#pragma once

#include "..\WebSocketSharp\Fin.h"
#include "..\WebSocketSharp\Mask.h"
#include "..\WebSocketSharp\Opcode.h"
#include "..\WebSocketSharp\PayloadData.h"
#include "..\WebSocketSharp\Rsv.h"

namespace WebSocketSharp
{
	class WebSocketFrame : public Object // 0x0
	{
	public:
		unsigned char* _extPayloadLength; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		unsigned char* _maskingKey; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		WebSocketSharp::PayloadData* _payloadData; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		WebSocketSharp::Fin _fin; // 0x28 (size: 0x1, flags: 0x1, type: 0x11)
		WebSocketSharp::Mask _mask; // 0x29 (size: 0x1, flags: 0x1, type: 0x11)
		WebSocketSharp::Opcode _opcode; // 0x2a (size: 0x1, flags: 0x1, type: 0x11)
		unsigned char _payloadLength; // 0x2b (size: 0x1, flags: 0x1, type: 0x5)
		WebSocketSharp::Rsv _rsv1; // 0x2c (size: 0x1, flags: 0x1, type: 0x11)
		WebSocketSharp::Rsv _rsv2; // 0x2d (size: 0x1, flags: 0x1, type: 0x11)
		WebSocketSharp::Rsv _rsv3; // 0x2e (size: 0x1, flags: 0x1, type: 0x11)
	}; // size = 0x30
}
