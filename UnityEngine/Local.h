#pragma once

#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Texture2D.h"

namespace UnityEngine
{
	namespace SocialPlatforms
{
	class Local : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.SocialPlatforms.Impl.UserProfile>* m_Friends; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.SocialPlatforms.Impl.UserProfile>* m_Users; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.SocialPlatforms.Impl.AchievementDescription>* m_AchievementDescriptions; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.SocialPlatforms.Impl.Achievement>* m_Achievements; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.SocialPlatforms.Impl.Leaderboard>* m_Leaderboards; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::Texture2D* m_DefaultTexture; // 0x38 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x40
}
