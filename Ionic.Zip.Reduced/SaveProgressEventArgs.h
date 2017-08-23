#pragma once

namespace Ionic
{
	namespace Zip
{
	class SaveProgressEventArgs : public ZipProgressEventArgs // 0x40
	{
	public:
		int _entriesSaved; // 0x40 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x48
}
