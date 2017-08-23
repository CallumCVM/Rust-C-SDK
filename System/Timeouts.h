#pragma once

namespace System
{
	namespace IO
{
{
		namespace Ports
{
	class Timeouts : public Object // 0x0
	{
	public:
		unsigned int ReadIntervalTimeout; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int ReadTotalTimeoutMultiplier; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int ReadTotalTimeoutConstant; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int WriteTotalTimeoutMultiplier; // 0x1c (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int WriteTotalTimeoutConstant; // 0x20 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x28
}
