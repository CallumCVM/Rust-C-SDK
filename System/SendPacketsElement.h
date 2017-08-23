#pragma once

#include "..\UnityEngine\UnicodeString*.h"

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class SendPacketsElement : public Object // 0x0
	{
	public:
		unsigned char* <Buffer>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* <FilePath>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		int <Count>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool <EndOfPacket>k__BackingField; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		int <Offset>k__BackingField; // 0x28 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x30
}
