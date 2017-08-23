#pragma once

namespace System
{
	namespace Net
{
	class DownloadProgressChangedEventArgs : public ProgressChangedEventArgs // 0x20
	{
	public:
		__int64 received; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 total; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x30
}
