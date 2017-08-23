#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Texture2D.h"

namespace UnityEngine
{
	namespace SocialPlatforms
{
{
		namespace Impl
{
	class AchievementDescription : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_Title; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::Texture2D* m_Image; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::UnicodeString* m_AchievedDescription; // 0x20 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* m_UnachievedDescription; // 0x28 (size: 0x8, flags: 0x1, type: 0xe)
		UnityEngine::UnicodeString* <id>k__BackingField; // 0x30 (size: 0x8, flags: 0x1, type: 0xe)
		bool m_Hidden; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		int m_Points; // 0x3c (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x40
}
