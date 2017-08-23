#pragma once

#include "..\System\IO\BinaryReader.h"
#include "..\System\Object.h"
#include "..\System\Runtime\Serialization\IFormatter.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Resources\ResourceReader\ResourceInfo.h"
#include "..\System\Resources\ResourceReader\ResourceCacheItem.h"

namespace System
{
	namespace Resources
{
	class ResourceReader : public Object // 0x0
	{
	public:
		System::IO::BinaryReader* reader; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Object readerLock; // 0x18 (size: 0x8, flags: 0x1, type: 0x1c)
		System::Runtime::Serialization::IFormatter* formatter; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		int resourceCount; // 0x28 (size: 0x4, flags: 0x3, type: 0x8)
		int typeCount; // 0x2c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::UnicodeString** typeNames; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		int* hashes; // 0x38 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Resources::ResourceReader::ResourceInfo* infos; // 0x40 (size: 0x8, flags: 0x1, type: 0x1d)
		int dataSectionOffset; // 0x48 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 nameSectionOffset; // 0x50 (size: 0x8, flags: 0x1, type: 0xa)
		int resource_ver; // 0x58 (size: 0x4, flags: 0x1, type: 0x8)
		System::Resources::ResourceReader::ResourceCacheItem* cache; // 0x60 (size: 0x8, flags: 0x1, type: 0x1d)
		System::Object cache_lock; // 0x68 (size: 0x8, flags: 0x1, type: 0x1c)
	}; // size = 0x70
}
