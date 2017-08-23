#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\EventSystems\BaseRaycaster.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Vector2.h"

namespace UnityEngine
{
	namespace EventSystems
{
	class RaycastResult : public ValueType // 0x0
	{
	public:
		UnityEngine::GameObject* m_GameObject; // 0x10 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::EventSystems::BaseRaycaster* module; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		float distance; // 0x20 (size: 0x4, flags: 0x6, type: 0xc)
		float index; // 0x24 (size: 0x4, flags: 0x6, type: 0xc)
		int depth; // 0x28 (size: 0x4, flags: 0x6, type: 0x8)
		int sortingLayer; // 0x2c (size: 0x4, flags: 0x6, type: 0x8)
		int sortingOrder; // 0x30 (size: 0x4, flags: 0x6, type: 0x8)
		UnityEngine::Vector3 worldPosition; // 0x34 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 worldNormal; // 0x40 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector2 screenPosition; // 0x4c (size: 0x8, flags: 0x6, type: 0x11)
	}; // size = 0x58
}
