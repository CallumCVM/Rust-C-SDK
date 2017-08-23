#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Analytics\AnalyticWebClient.h"

namespace Facepunch
{
	class Analytics : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* <Uid>k__BackingField; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <SessionId>k__BackingField; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <ReportUrl>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		Facepunch::Analytics::AnalyticWebClient* webClient; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x30
}
