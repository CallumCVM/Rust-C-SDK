#pragma once

#include "..\ProtoBuf\ItemContainer.h"

namespace ProtoBuf
{
	class ResourceExtractor : public Object // 0x0
	{
	public:
		ProtoBuf::ItemContainer* fuelContents; // 0x10 (size: 0x8, flags: 0x86, type: 0x12)
		ProtoBuf::ItemContainer* outputContents; // 0x18 (size: 0x8, flags: 0x86, type: 0x12)
		bool ShouldPool; // 0x20 (size: 0x1, flags: 0x6, type: 0x2)
		bool _disposed; // 0x21 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
