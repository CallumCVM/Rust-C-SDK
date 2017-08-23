#pragma once

#include "..\UnityEngine\Networking\NetworkInstanceId.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class OverrideTransformMessage : public MessageBase // 0x0
	{
	public:
		unsigned char* payload; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Networking::NetworkInstanceId netId; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
		bool teleport; // 0x1c (size: 0x1, flags: 0x6, type: 0x2)
		int time; // 0x20 (size: 0x4, flags: 0x6, type: 0x8)
	}; // size = 0x28
}
