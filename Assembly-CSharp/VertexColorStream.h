#pragma once

#include "..\UnityEngine\Mesh.h"
#include "MeshHolder.h"
#include "..\UnityEngine\Vector3.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\BoneWeight.h"
#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\Vector4.h"
#include "..\UnityEngine\Vector2.h"
#include "..\UnityEngine\Color.h"

namespace rust 
{
	class VertexColorStream : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::Mesh* originalMesh; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Mesh* paintedMesh; // 0x20 (size: 0x8, flags: 0x6, type: 0x12)
		MeshHolder* meshHold; // 0x28 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::Vector3* _vertices; // 0x30 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector3* _normals; // 0x38 (size: 0x8, flags: 0x6, type: 0x1d)
		int* _triangles; // 0x40 (size: 0x8, flags: 0x6, type: 0x1d)
		int* _Subtriangles; // 0x48 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Matrix4x4* _bindPoses; // 0x50 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::BoneWeight* _boneWeights; // 0x58 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector4* _tangents; // 0x60 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector2* _uv; // 0x68 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector2* _uv2; // 0x70 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector2* _uv3; // 0x78 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Color* _colors; // 0x80 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Vector2* _uv4; // 0x88 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Bounds _bounds; // 0x90 (size: 0x18, flags: 0x6, type: 0x11)
		int _subMeshCount; // 0xa8 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0xb0
}
