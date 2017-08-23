#pragma once

#include "..\SilentOrbit\ProtocolBuffers\Wire.h"

namespace SilentOrbit
{
	namespace ProtocolBuffers
{
	class Key : public ValueType // 0x0
	{
	public:
		unsigned int <Field>k__BackingField; // 0x10 (size: 0x4, flags: 0x1, type: 0x9)
		SilentOrbit::ProtocolBuffers::Wire <WireType>k__BackingField; // 0x14 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
