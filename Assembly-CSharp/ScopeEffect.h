#pragma once

#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ScopeEffect : public PostEffectsBase // 0x20
	{
	public:
		UnityEngine::Material* overlayMaterial; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x28
}
