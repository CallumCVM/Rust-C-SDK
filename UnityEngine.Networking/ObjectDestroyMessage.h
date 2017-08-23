#pragma once

#include "..\UnityEngine\Networking\NetworkInstanceId.h"

namespace UnityEngine
{
	namespace Networking
{
{
		namespace NetworkSystem
{
	class ObjectDestroyMessage : public MessageBase // 0x0
	{
	public:
		UnityEngine::Networking::NetworkInstanceId netId; // 0x10 (size: 0x4, flags: 0x6, type: 0x11)
	}; // size = 0x18
}
