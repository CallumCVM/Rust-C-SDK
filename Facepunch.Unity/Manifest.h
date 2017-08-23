#pragma once

#include "..\Facepunch\Models\Manifest\NewsInfo.h"
#include "..\Facepunch\Models\Manifest\ServersInfo.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Models\Manifest\Administrator.h"

namespace Facepunch
{
	namespace Models
{
	class Manifest : public Object // 0x0
	{
	public:
		Facepunch::Models::Manifest::NewsInfo* News; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		Facepunch::Models::Manifest::ServersInfo* Servers; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* ExceptionReportingUrl; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* BenchmarkUrl; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* AnalyticUrl; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* DatabaseUrl; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* FeedbackUrl; // 0x40 (size: 0x8, flags: 0x6, type: 0xe)
		Facepunch::Models::Manifest::Administrator* Administrators; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x50
}
