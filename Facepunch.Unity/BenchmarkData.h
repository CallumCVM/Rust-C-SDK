#pragma once

#include "..\Facepunch\BenchmarkData\Result.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\Facepunch\Models\AppInfo.h"

namespace Facepunch
{
	class BenchmarkData : public Object // 0x0
	{
	public:
		Facepunch::BenchmarkData::Result* Results; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::UnicodeString* UserID; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* BuildDate; // 0x20 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* BranchName; // 0x28 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* Changeset; // 0x30 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::UnicodeString* BuildId; // 0x38 (size: 0x8, flags: 0x6, type: 0xe)
		Facepunch::Models::AppInfo AppInfo; // 0x40 (size: 0x1, flags: 0x6, type: 0x11)
	}; // size = 0x48
}
