#pragma once

#include "..\UnityEngine\Networking\QosType.h"

namespace UnityEngine
{
	namespace Networking
{
	class ChannelQOS : public Object // 0x0
	{
	public:
		UnityEngine::Networking::QosType m_Type; // 0x10 (size: 0x4, flags: 0x3, type: 0x11)
	}; // size = 0x18
}
