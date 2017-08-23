#pragma once

#include "..\UnityEngine\Rendering\CommandBuffer.h"
#include "..\UnityEngine\List.h"

namespace rust 
{
	class CommandBufferEntry : public ValueType // 0x0
	{
	public:
		UnityEngine::Rendering::CommandBuffer* buffer; // 0x10 (size: 0x8, flags: 0x6, type: 0x12)
		UnityEngine::List<System.Collections.Generic.KeyValuePair<int,System.Action<UnityEngine.Rendering.CommandBuffer>>>* orderedFill; // 0x18 (size: 0x8, flags: 0x6, type: 0x15)
	}; // size = 0x20
}
