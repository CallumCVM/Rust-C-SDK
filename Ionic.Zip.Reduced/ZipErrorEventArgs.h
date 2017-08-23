#pragma once

#include "..\System\Exception.h"

namespace Ionic
{
	namespace Zip
{
	class ZipErrorEventArgs : public ZipProgressEventArgs // 0x40
	{
	public:
		System::Exception* _exc; // 0x40 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x48
}
