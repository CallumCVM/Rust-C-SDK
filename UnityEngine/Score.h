#pragma once

#include "..\System\DateTime.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace UnityEngine
{
	namespace SocialPlatforms
{
{
		namespace Impl
{
	class Score : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_FormattedValue; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_UserID; // 0x18 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <leaderboardID>k__BackingField; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		System::DateTime m_Date; // 0x28 (size: 0x10, flags: 0x1, type: 0x11)
		int m_Rank; // 0x38 (size: 0x4, flags: 0x1, type: 0x8)
		__int64 <value>k__BackingField; // 0x40 (size: 0x8, flags: 0x1, type: 0xa)
	}; // size = 0x48
}
