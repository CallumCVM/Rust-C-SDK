#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\Rust\Workshop\Skin\Manifest.h"
#include "Skinnable.h"
#include "..\UnityEngine\Material.h"

namespace Rust
{
	namespace Workshop
{
	class Skin : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* manifestName; // 0x10 (size: 0x8, flags: 0x1, type: 0xe)
		Rust::Workshop::Skin::Manifest* manifest; // 0x18 (size: 0x8, flags: 0x1, type: 0x12)
		Skinnable* Skinnable; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Material* Materials; // 0x28 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Material* DefaultMaterials; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		bool <IsLoading>k__BackingField; // 0x38 (size: 0x1, flags: 0x1, type: 0x2)
	}; // size = 0x40
}
