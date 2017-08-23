#pragma once

#include "..\System\DateTime.h"
#include "..\System\Net\Cache\HttpRequestCacheLevel.h"
#include "..\System\TimeSpan.h"

namespace System
{
	namespace Net
{
{
		namespace Cache
{
	class HttpRequestCachePolicy : public RequestCachePolicy // 0x18
	{
	public:
		System::DateTime cacheSyncDate; // 0x18 (size: 0x10, flags: 0x1, type: 0x11)
		System::Net::Cache::HttpRequestCacheLevel level; // 0x28 (size: 0x4, flags: 0x1, type: 0x11)
		System::TimeSpan maxAge; // 0x30 (size: 0x8, flags: 0x1, type: 0x11)
		System::TimeSpan maxStale; // 0x38 (size: 0x8, flags: 0x1, type: 0x11)
		System::TimeSpan minFresh; // 0x40 (size: 0x8, flags: 0x1, type: 0x11)
	}; // size = 0x48
}
