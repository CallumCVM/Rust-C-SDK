#pragma once

namespace System
{
	namespace Net
{
	class UploadProgressChangedEventArgs : public ProgressChangedEventArgs // 0x20
	{
	public:
		__int64 received; // 0x20 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 sent; // 0x28 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 total_recv; // 0x30 (size: 0x8, flags: 0x1, type: 0xa)
		__int64 total_send; // 0x38 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x40
}
