#pragma once

namespace System
{
	namespace IO
{
	class FAMRequest : public ValueType // 0x0
	{
	public:
		int ReqNum; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
