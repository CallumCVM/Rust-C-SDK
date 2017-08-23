#pragma once

#include "..\UnityEngine\SocialPlatforms\IScore.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\SocialPlatforms\UserScope.h"
#include "..\UnityEngine\SocialPlatforms\Range.h"
#include "..\UnityEngine\SocialPlatforms\TimeScope.h"

namespace UnityEngine
{
	namespace SocialPlatforms
{
{
		namespace Impl
{
	class Leaderboard : public Object // 0x0
	{
	public:
		UnityEngine::SocialPlatforms::IScore* m_LocalUserScore; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::SocialPlatforms::IScore* m_Scores; // 0x18 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* m_Title; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString** m_UserIDs; // 0x28 (size: 0x8, flags: 0x1, type: 0x1d)
		UnityEngine::UnicodeString* <id>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool m_Loading; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		unsigned int m_MaxRange; // 0x3c (size: 0x4, flags: 0x1, type: 0x9)
		UnityEngine::SocialPlatforms::UserScope <userScope>k__BackingField; // 0x40 (size: 0x4, flags: 0x1, type: 0x11)
		UnityEngine::SocialPlatforms::Range <range>k__BackingField; // 0x44 (size: 0x8, flags: 0x1, type: 0x11)
		UnityEngine::SocialPlatforms::TimeScope <timeScope>k__BackingField; // 0x4c (size: 0x4, flags: 0x1, type: 0x11)
	}; // size = 0x50
}
