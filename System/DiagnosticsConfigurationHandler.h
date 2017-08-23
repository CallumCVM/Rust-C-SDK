#pragma once

#include "..\System\Diagnostics\TraceImplSettings.h"
#include "..\System\Collections\IDictionary.h"

namespace System
{
	namespace Diagnostics
{
	class DiagnosticsConfigurationHandler : public Object // 0x0
	{
	public:
		System::Diagnostics::TraceImplSettings* configValues; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		System::Collections::IDictionary* elementHandlers; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x20
}
