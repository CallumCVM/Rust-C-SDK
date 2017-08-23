#pragma once

#include "..\UnityEngine\UnicodeString*.h"
#include "..\UnityEngine\Texture2D.h"
#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class MeshPaintableSource : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::UnicodeString* replacementTextureName; // 0x18 (size: 0x8, flags: 0x6, type: 0xe)
		UnityEngine::Texture2D* texture; // 0x20 (size: 0x8, flags: 0x86, type: 0x12)
		UnityEngine::GameObject* sourceObject; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* collisionMesh; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		int texWidth; // 0x38 (size: 0x4, flags: 0x6, type: 0x8)
		int texHeight; // 0x3c (size: 0x4, flags: 0x6, type: 0x8)
		float cameraFOV; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float cameraDistance; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 localPosition; // 0x48 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 localRotation; // 0x54 (size: 0xc, flags: 0x6, type: 0x11)
	}; // size = 0x60
}
