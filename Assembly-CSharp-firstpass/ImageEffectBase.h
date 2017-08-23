#pragma once

#include "..\UnityEngine\Shader.h"
#include "..\UnityEngine\Material.h"

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class ImageEffectBase : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Shader* shader; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* m_Material; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
	}; // size = 0x28
}
