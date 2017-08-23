#pragma once

#include "..\System\Net\Cache\RequestCacheLevel.h"

namespace System
{
	namespace Net
{
{
		namespace Cache
{
	class RequestCachePolicy : public Object // 0x0
	{
	public:
		System::Net::Cache::RequestCacheLevel level; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x18
}
