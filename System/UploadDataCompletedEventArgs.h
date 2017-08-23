#pragma once

namespace System
{
	namespace Net
{
	class UploadDataCompletedEventArgs : public AsyncCompletedEventArgs // 0x28
	{
	public:
		unsigned char* result; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
	}; // size = 0x30
}
