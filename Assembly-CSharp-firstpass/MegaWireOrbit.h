#pragma once

#include "..\UnityEngine\GameObject.h"
#include "..\UnityEngine\MeshRenderer.h"
#include "..\UnityEngine\SkinnedMeshRenderer.h"
#include "..\UnityEngine\MeshFilter.h"
#include "..\UnityEngine\Vector3.h"

namespace rust 
{
	class MegaWireOrbit : public MonoBehaviour // 0x18
	{
	public:
		UnityEngine::GameObject* target; // 0x18 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::MeshRenderer* render; // 0x20 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::SkinnedMeshRenderer* srender; // 0x28 (size: 0x8, flags: 0x1, type: 0x12)
		UnityEngine::MeshFilter* filter; // 0x30 (size: 0x8, flags: 0x1, type: 0x12)
		float distance; // 0x38 (size: 0x4, flags: 0x6, type: 0xc)
		float xSpeed; // 0x3c (size: 0x4, flags: 0x6, type: 0xc)
		float ySpeed; // 0x40 (size: 0x4, flags: 0x6, type: 0xc)
		float zSpeed; // 0x44 (size: 0x4, flags: 0x6, type: 0xc)
		float yMinLimit; // 0x48 (size: 0x4, flags: 0x6, type: 0xc)
		float yMaxLimit; // 0x4c (size: 0x4, flags: 0x6, type: 0xc)
		float xMinLimit; // 0x50 (size: 0x4, flags: 0x6, type: 0xc)
		float xMaxLimit; // 0x54 (size: 0x4, flags: 0x6, type: 0xc)
		float x; // 0x58 (size: 0x4, flags: 0x6, type: 0xc)
		float y; // 0x5c (size: 0x4, flags: 0x6, type: 0xc)
		UnityEngine::Vector3 center; // 0x60 (size: 0xc, flags: 0x1, type: 0x11)
		bool Dynamic; // 0x6c (size: 0x1, flags: 0x6, type: 0x2)
		UnityEngine::Vector3 offset; // 0x70 (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 EditTest; // 0x7c (size: 0xc, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 tpos; // 0x88 (size: 0xc, flags: 0x1, type: 0x11)
		float t; // 0x94 (size: 0x4, flags: 0x1, type: 0xc)
		float trantime; // 0x98 (size: 0x4, flags: 0x6, type: 0xc)
		float vx; // 0x9c (size: 0x4, flags: 0x6, type: 0xc)
		float vy; // 0xa0 (size: 0x4, flags: 0x6, type: 0xc)
		float vz; // 0xa4 (size: 0x4, flags: 0x6, type: 0xc)
		float nx; // 0xa8 (size: 0x4, flags: 0x6, type: 0xc)
		float ny; // 0xac (size: 0x4, flags: 0x6, type: 0xc)
		float nz; // 0xb0 (size: 0x4, flags: 0x6, type: 0xc)
		float delay; // 0xb4 (size: 0x4, flags: 0x6, type: 0xc)
		float delayz; // 0xb8 (size: 0x4, flags: 0x6, type: 0xc)
		float mindist; // 0xbc (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0xc0
}
