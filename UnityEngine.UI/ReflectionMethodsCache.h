#pragma once

#include "..\UnityEngine\UI\ReflectionMethodsCache\Raycast3DCallback.h"
#include "..\UnityEngine\UI\ReflectionMethodsCache\RaycastAllCallback.h"
#include "..\UnityEngine\UI\ReflectionMethodsCache\Raycast2DCallback.h"
#include "..\UnityEngine\UI\ReflectionMethodsCache\GetRayIntersectionAllCallback.h"

namespace UnityEngine
{
	namespace UI
{
	class ReflectionMethodsCache : public Object // 0x0
	{
	public:
		UnityEngine::UI::ReflectionMethodsCache::Raycast3DCallback* raycast3D; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback* raycast3DAll; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback* raycast2D; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback* getRayIntersectionAll; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
	}; // size = 0x30
}
