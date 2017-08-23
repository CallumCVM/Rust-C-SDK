#pragma once

#include "..\System\Runtime\Serialization\Formatters\Binary\TypeMetadata.h"

namespace rust 
{
	class MetadataReference : public Object // 0x0
	{
	public:
		System::Runtime::Serialization::Formatters::Binary::TypeMetadata* Metadata; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		__int64 ObjectID; // 0x18 (size: 0x8, flags: 0x6, type: 0xa)
	}; // size = 0x20
}
