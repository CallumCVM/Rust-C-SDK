#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\CounterSample.h"

namespace System
{
	namespace Diagnostics
{
	class InstanceData : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* instanceName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Diagnostics::CounterSample sample; // 0x18 (size: 0x40, flags: 0x1, type: 0x11)
	}; // size = 0x58
}
