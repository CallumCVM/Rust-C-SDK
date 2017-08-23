#pragma once

#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\UnicodeString*.h"

namespace rust 
{
	class Effect : public EffectData // 0x50
	{
	public:
		UnityEngine::Transform* transform; // 0x50 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::GameObject* gameObject; // 0x58 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::UnicodeString* pooledString; // 0x60 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Vector3 Up; // 0x68 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 worldPos; // 0x74 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 worldNrm; // 0x80 (size: 0xc, flags: 0x6, type: 0x11)
		bool attached; // 0x8c (size: 0x1, flags: 0x6, type: 0x2)
		bool broadcast; // 0x8d (size: 0x1, flags: 0x6, type: 0x2)
	}; // size = 0x90
}
