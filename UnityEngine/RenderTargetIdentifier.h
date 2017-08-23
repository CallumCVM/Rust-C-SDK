#pragma once

#include "..\UnityEngine\Rendering\BuiltinRenderTextureType.h"

namespace UnityEngine
{
	namespace Rendering
{
	class RenderTargetIdentifier : public ValueType // 0x0
	{
	public:
		UnityEngine::Rendering::BuiltinRenderTextureType m_Type; // 0x10 (size: 0x4, flags: 0x1, type: 0x11)
		int m_NameID; // 0x14 (size: 0x4, flags: 0x1, type: 0x8)
		int m_InstanceID; // 0x18 (size: 0x4, flags: 0x1, type: 0x8)
	}; // size = 0x20
}
