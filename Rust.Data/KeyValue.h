#pragma once

#include "..\SilentOrbit\ProtocolBuffers\Key.h"

namespace SilentOrbit
{
	namespace ProtocolBuffers
{
	class KeyValue : public Object // 0x0
	{
	public:
		unsigned char* <Value>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		SilentOrbit::ProtocolBuffers::Key <Key>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
