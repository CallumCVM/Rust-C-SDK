#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\TraceLevel.h"

namespace Newtonsoft
{
	namespace Json
{
{
		namespace Serialization
{
	class MemoryTraceWriter : public Object // 0x0
	{
	public:
		System.Collections.Generic.Queue<UnityEngine::UnicodeString*> _traceMessages; // 0x10 (size: 0x8, flags: 0x21, type: 0x15)
		System::Diagnostics::TraceLevel <LevelFilter>k__BackingField; // 0x18 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x20
}
