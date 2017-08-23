#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Quaternion.h"
#include "..\UnityEngine\UnicodeString*.h"
#include "..\PrefabAttribute\Library.h"
#include "GameManager.h"

namespace rust 
{
	class PrefabAttribute : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* fullName; // 0x18 (size: 0x8, flags: 0x86, type: 0xe)
		UnityEngine::UnicodeString* hierachyName; // 0x20 (size: 0x8, flags: 0x86, type: 0xe)
		PrefabAttribute::Library* prefabAttribute; // 0x28 (size: 0x8, flags: 0x86, type: 0x12)
		GameManager* gameManager; // 0x30 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::Vector3 worldPosition; // 0x38 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Quaternion worldRotation; // 0x44 (size: 0x10, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 worldForward; // 0x54 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 localPosition; // 0x60 (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Vector3 localScale; // 0x6c (size: 0xc, flags: 0x86, type: 0x11)
		UnityEngine::Quaternion localRotation; // 0x78 (size: 0x10, flags: 0x86, type: 0x11)
		unsigned int prefabID; // 0x88 (size: 0x4, flags: 0x86, type: 0x9)
		int instanceID; // 0x8c (size: 0x4, flags: 0x86, type: 0x8)
		bool isServer; // 0x90 (size: 0x1, flags: 0x86, type: 0x2)
	}; // size = 0x98
}
