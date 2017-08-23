#pragma once

#include "..\System\Collections\Generic\Queue<T>.h"
#include "..\System\Collections\Generic\HashSet<T>.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
template <typename T0>
	class ObjectWorkQueue : public Object // 0x0
	{
	public:
		System::Collections::Generic::Queue<T> queue; // 0x10 (size: 0x8, flags: 0x4, type: 0x15)
		System::Collections::Generic::HashSet<T> containerTest; // 0x18 (size: 0x8, flags: 0x4, type: 0x15)
		UnityEngine::UnicodeString* queueName; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		__int64 warnTime; // 0x28 (size: 0x8, flags: 0x6, type: 0xa)
		__int64 totalProcessed; // 0x30 (size: 0x8, flags: 0x6, type: 0xa)
		double totalTime; // 0x38 (size: 0x8, flags: 0x6, type: 0xd)
		int queueProcessedLast; // 0x40 (size: 0x4, flags: 0x6, type: 0x8)
		double lastMS; // 0x48 (size: 0x8, flags: 0x6, type: 0xd)
		int hashsetMaxLength; // 0x50 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x58
}
