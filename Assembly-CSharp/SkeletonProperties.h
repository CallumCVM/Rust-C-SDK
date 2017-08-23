#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\SkeletonProperties\BoneProperty.h"

namespace rust 
{
	class SkeletonProperties : public ScriptableObject // 0x18
	{
	public:
		UnityEngine::GameObject* boneReference; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		SkeletonProperties::BoneProperty* bones; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
		System.Collections.Generic.Dictionary<unsigned int,SkeletonProperties.BoneProperty> quickLookup; // 0x28 (size: 0x8, flags: 0x81, type: 0x15)
	}; // size = 0x30
}
