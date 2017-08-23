#pragma once

namespace rust 
{
	class BaseCommandBuffer : public MonoBehaviour // 0x18
	{
	public:
		System.Collections.Generic.Dictionary<UnityEngine.Camera,System.Collections.Generic.Dictionary<int,UnityEngine.Rendering.CommandBuffer>> cameras; // 0x18 (size: 0x8, flags: 0x1, type: 0x15)
	}; // size = 0x20
}
