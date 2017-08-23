#pragma once

namespace System
{
	namespace IO
{
{
		namespace Ports
{
	class CommStat : public Object // 0x0
	{
	public:
		unsigned int flags; // 0x10 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int BytesIn; // 0x14 (size: 0x4, flags: 0x6, type: 0x9)
		unsigned int BytesOut; // 0x18 (size: 0x4, flags: 0x6, type: 0x9)
	}; // size = 0x20
}
