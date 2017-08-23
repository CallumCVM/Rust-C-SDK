#pragma once

namespace rust 
{
	class FileStorage : public Object // 0x0
	{
	public:
		System.Collections.Generic.Dictionary<unsigned int,FileStorage.CacheData> _cache; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x18
}
