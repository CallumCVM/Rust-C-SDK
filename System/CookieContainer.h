#pragma once

#include "..\System\Net\CookieCollection.h"

namespace System
{
	namespace Net
{
	class CookieContainer : public Object // 0x0
	{
	public:
		System::Net::CookieCollection* cookies; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		int capacity; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
		int perDomainCapacity; // 0x1c (size: 0x4, flags: 0x1, type: 0x8)
		int maxCookieSize; // 0x20 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x28
}
