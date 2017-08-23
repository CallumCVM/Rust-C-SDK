#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Component.h"

namespace rust 
{
	class RealmedRemove : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* removedFromClient; // 0x18 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Component* removedComponentFromClient; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::GameObject* removedFromServer; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Component* removedComponentFromServer; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Component* doNotRemoveFromServer; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Component* doNotRemoveFromClient; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x48
}
