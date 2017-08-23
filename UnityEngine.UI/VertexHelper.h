#pragma once

#include "..\UnityEngine\List.h"

namespace UnityEngine
{
	namespace UI
{
	class VertexHelper : public Object // 0x0
	{
	public:
		UnityEngine::List<UnityEngine.Vector3>* m_Positions; // 0x10 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Color32>* m_Colors; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Vector2>* m_Uv0S; // 0x20 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Vector2>* m_Uv1S; // 0x28 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Vector2>* m_Uv2S; // 0x30 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Vector2>* m_Uv3S; // 0x38 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Vector3>* m_Normals; // 0x40 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<UnityEngine.Vector4>* m_Tangents; // 0x48 (size: 0x8, flags: 0x1, type: 0x15)
		UnityEngine::List<int>* m_Indices; // 0x50 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x58
}
