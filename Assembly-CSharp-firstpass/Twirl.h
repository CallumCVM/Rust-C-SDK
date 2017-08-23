#pragma once

#include "..\UnityEngine\Vector2.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class Twirl : public ImageEffectBase // 0x28
	{
	public:
		UnityEngine::Vector2 radius; // 0x28 (size: 0x8, flags: 0x6, type: 0x11)
		float angle; // 0x30 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector2 center; // 0x34 (size: 0x8, flags: 0x6, type: 0x11)
	}; // size = 0x40
}
