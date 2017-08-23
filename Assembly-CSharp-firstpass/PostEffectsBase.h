#pragma once

namespace UnityStandardAssets
{
	namespace ImageEffects
{
	class PostEffectsBase : public MonoBehaviour // 0x18
	{
	public:
		bool supportHDRTextures; // 0x18 (size: 0x1, flags: 0x4, type: 0x2)
		bool supportDX11; // 0x19 (size: 0x1, flags: 0x4, type: 0x2)
		bool isSupported; // 0x1a (size: 0x1, flags: 0x4, type: 0x2)
	}; // size = 0x20
}
