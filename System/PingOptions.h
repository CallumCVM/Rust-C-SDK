#pragma once

namespace System
{
	namespace Net
{
{
		namespace NetworkInformation
{
	class PingOptions : public Object // 0x0
	{
	public:
		int ttl; // 0x10 (size: 0x4, flags: 0x1, type: 0x8)
		bool dont_fragment; // 0x14 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x18
}
