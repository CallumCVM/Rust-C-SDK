#pragma once

namespace System
{
	namespace IO
{
{
		namespace Ports
{
	class SerialPortStream : public Stream // 0x18
	{
	public:
		int fd; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int read_timeout; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int write_timeout; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
		bool disposed; // 0x24 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x28
}
