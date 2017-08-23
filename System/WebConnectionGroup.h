#pragma once

#include "..\System\Net\ServicePoint.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Collections\ArrayList.h"
#include "..\System\Random.h"
#include "..\System\Collections\Queue.h"

namespace System
{
	namespace Net
{
	class WebConnectionGroup : public Object // 0x0
	{
	public:
		System::Net::ServicePoint* sPoint; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* name; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		System::Collections::ArrayList* connections; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		System::Random* rnd; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::Queue* queue; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x38
}
