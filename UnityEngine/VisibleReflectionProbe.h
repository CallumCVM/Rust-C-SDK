#pragma once

#include "..\UnityEngine\Bounds.h"
#include "..\UnityEngine\Matrix4x4.h"
#include "..\UnityEngine\Vector4.h"
#include "..\UnityEngine\Vector3.h"

namespace UnityEngine
{
	namespace Experimental
{
{
		namespace Rendering
{
	class VisibleReflectionProbe : public ValueType // 0x0
	{
	public:
		UnityEngine::Bounds bounds; // 0x10 (size: 0x18, flags: 0x6, type: 0x11)
		UnityEngine::Matrix4x4 localToWorld; // 0x28 (size: 0x40, flags: 0x6, type: 0x11)
		UnityEngine::Vector4 hdr; // 0x68 (size: 0x10, flags: 0x6, type: 0x11)
		UnityEngine::Vector3 center; // 0x78 (size: 0xc, flags: 0x6, type: 0x11)
		float blendDistance; // 0x84 (size: 0x4, flags: 0x6, type: 0xc)
		int importance; // 0x88 (size: 0x4, flags: 0x6, type: 0x8)
		int boxProjection; // 0x8c (size: 0x4, flags: 0x6, type: 0x8)
		int instanceId; // 0x90 (size: 0x4, flags: 0x1, type: 0x8)
		int textureId; // 0x94 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x98
}
