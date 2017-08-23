#pragma once

#include "..\System\Threading\ManualResetEvent.h"
#include "..\System\IO\Ports\Timeouts.h"

namespace System
{
	namespace IO
{
{
		namespace Ports
{
	class WinSerialStream : public Stream // 0x18
	{
	public:
		System::Threading::ManualResetEvent* read_event; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Threading::ManualResetEvent* write_event; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::IO::Ports::Timeouts* timeouts; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		int handle; // 0x30 (size: 0x4, flags: 0x1, type: 0x8)
		int read_timeout; // 0x34 (size: 0x4, flags: 0x1, type: 0x8)
		int write_timeout; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		bool disposed; // 0x3c (size: 0x1, flags: 0x1, type: 0x2)
		__int64 write_overlapped; // 0x40 (size: 0x8, flags: 0x1, type: 0x18)
		__int64 read_overlapped; // 0x48 (size: 0x8, flags: 0x1, type: 0x18)
	}; // size = 0x50
}
