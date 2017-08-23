#pragma once

namespace UnityEngine
{
	namespace Networking
{
	class NetworkSettingsAttribute : public Attribute // 0x0
	{
	public:
		int channel; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
		float sendInterval; // 0x14 (size: 0x4, flags: 0x6, type: 0xc)
	}; // size = 0x18
}
