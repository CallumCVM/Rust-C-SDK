#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\System\Diagnostics\SourceLevels.h"
#include "..\System\Diagnostics\TraceListenerCollection.h"

namespace System
{
	namespace Diagnostics
{
	class TraceSourceInfo : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* name; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		System::Diagnostics::TraceListenerCollection* listeners; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		System::Diagnostics::SourceLevels levels; // 0x20 (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x28
}
