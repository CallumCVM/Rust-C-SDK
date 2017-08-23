#pragma once

#include "..\UnityEngine\Networking\NetworkInstanceId.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class AnimationParametersMessage : public MessageBase // 0x0
	{
	public:
		unsigned char* parameters; // 0x10 (size: 0x8, flags: 0x6, type: 0x1d)
		UnityEngine::Networking::NetworkInstanceId netId; // 0x18 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x20
}
