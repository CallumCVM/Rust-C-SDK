#pragma once

#include "..\UnityEngine\List.h"
#include "..\System\Diagnostics\Stopwatch.h"

namespace rust 
{
	class SubRequest : public Object // 0x0
	{
	public:
		UnityEngine::List<int>* WatchList; // 0x10 (size: 0x8, flags: 0x3, type: 0x15)
		System::Diagnostics::Stopwatch* Timer; // 0x18 (size: 0x8, flags: 0x3, type: 0x12)
		__int64 Request; // 0x20 (size: 0x8, flags: 0x3, type: 0x18)
		int Pointer; // 0x28 (size: 0x4, flags: 0x3, type: 0x8)
	}; // size = 0x30
}
