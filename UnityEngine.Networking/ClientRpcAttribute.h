#pragma once

namespace UnityEngine
{
	namespace Networking
{
	class ClientRpcAttribute : public Attribute // 0x0
	{
	public:
		int channel; // 0x10 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x18
}
