#pragma once

namespace System
{
	namespace Net
{
{
		namespace Sockets
{
	class LingerOption : public Object // 0x0
	{
	public:
		bool enabled; // 0x10 (size: 0x1, flags: 0x1, type: 0x2)
		int seconds; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x18
}
