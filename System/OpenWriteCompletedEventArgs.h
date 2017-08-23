#pragma once

#include "..\System\IO\Stream.h"

namespace System
{
	namespace Net
{
	class OpenWriteCompletedEventArgs : public AsyncCompletedEventArgs // 0x28
	{
	public:
		System::IO::Stream* result; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
