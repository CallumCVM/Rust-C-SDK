#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\SocialPlatforms\UserState.h"
#include "..\UnityEngine\Texture2D.h"

namespace UnityEngine
{
	namespace SocialPlatforms
{
{
		namespace Impl
{
	class UserProfile : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* m_UserName; // 0x10 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::UnicodeString* m_ID; // 0x18 (size: 0x8, flags: 0x4, type: 0xe)
		UnityEngine::Texture2D* m_Image; // 0x20 (size: 0x8, flags: 0x4, type: 0x12)
		bool m_IsFriend; // 0x28 (size: 0x1, flags: 0x4, type: 0x2)
		UnityEngine::SocialPlatforms::UserState m_State; // 0x2c (size: 0x4, flags: 0x4, type: 0x11)
	}; // size = 0x30
}
