#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\SkinnedMeshRenderer.h"

namespace rust 
{
	class MeshReplace : public Object // 0x0
	{
	public:
		UnityEngine::UnicodeString* FindName; // 0x10 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Mesh* Find; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::SkinnedMeshRenderer* Replace; // 0x20 (size: 0x8, flags: 0x6, type: 0x1d)
	}; // size = 0x28
}
