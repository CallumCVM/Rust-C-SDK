#pragma once

namespace Facepunch
{
	namespace Steamworks
{
	class Image : public Object // 0x0
	{
	public:
		unsigned char* <Data>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0x1d)
		int <Id>k__BackingField; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int <Width>k__BackingField; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int <Height>k__BackingField; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool <IsLoaded>k__BackingField; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
		bool <IsError>k__BackingField; // 0x25 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
