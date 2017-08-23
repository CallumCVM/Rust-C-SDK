#pragma once

#include "..\UnityEngine\LightType.h"
#include "..\UnityEngine\Color.h"
#include "..\UnityEngine\Rect.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Experimental\Rendering\VisibleLightFlags.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class VisibleLight : public ValueType // 0x0
	{
	public:
		UnityEngine::LightType lightType; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
		UnityEngine::Color finalColor; // 0x14 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Rect screenRect; // 0x24 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Matrix4x4 localToWorld; // 0x34 (size: 0x40, flags: 0x6, type: 0x11)
		float range; // 0x74 (size: 0x4, flags: 0x6, type: 0xc)
		float spotAngle; // 0x78 (size: 0x4, flags: 0x6, type: 0xc)
		int instanceId; // 0x7c (size: 0x4, flags: 0x1, type: 0x8)
		UnityEngine::Experimental::Rendering::VisibleLightFlags flags; // 0x80 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x88
}
