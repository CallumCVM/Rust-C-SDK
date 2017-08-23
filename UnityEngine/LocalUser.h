#pragma once

#include "..\UnityEngine\SocialPlatforms\IUserProfile.h"

namespace UnityEngine
{
	namespace SocialPlatforms
{
{
		namespace Impl
{
	class LocalUser : public UserProfile // 0x30
	{
	public:
		UnityEngine::SocialPlatforms::IUserProfile* m_Friends; // 0x30 (size: 0x8, flags: 0x1, type: 0x1d)
		bool m_Authenticated; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
		bool m_Underage; // 0x39 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
