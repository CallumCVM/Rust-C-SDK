#pragma once

#include "..\UnityEngine\Transform.h"
#include "..\UnityEngine\List.h"
#include "..\UnityEngine\Mesh.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Vector2.h"

namespace rust 
{
	class MegaWireSpan : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Transform* start; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Transform* end; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<MegaWireConnection>* connections; // 0x28 (size: 0x8, flags: 0x6, type: 0x15)
		UnityEngine::Mesh* mesh; // 0x30 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3* verts; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector2* uvs; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		int* tris; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3* norms; // 0x50 (size: 0x8, flags: 0x6, type: 0x1d)
		bool visible; // 0x58 (size: 0x1, flags: 0x6, type: 0x2)
		bool on; // 0x59 (size: 0x1, flags: 0x6, type: 0x2)
		float WireLength; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		bool AllowUpdates; // 0x60 (size: 0x1, flags: 0x6, type: 0x2)
		bool buildmesh; // 0x61 (size: 0x1, flags: 0x6, type: 0x2)
		float time; // 0x64 (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Matrix4x4 startTm; // 0x68 (size: 0x40, flags: 0x6, type: 0x11)
		UnityEngine::Matrix4x4 endTm; // 0xa8 (size: 0x40, flags: 0x6, type: 0x11)
		int vcount; // 0xe8 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0xf0
}
